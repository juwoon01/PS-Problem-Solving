/*https://www.acmicpc.net/problem/1463*/
/*
동적계획법
정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

X가 3으로 나누어 떨어지면, 3으로 나눈다.
X가 2로 나누어 떨어지면, 2로 나눈다.
1을 뺀다.
정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다.
연산을 사용하는 횟수의 최솟값을 출력하시오.
첫째 줄에 1보다 크거나 같고, 1000000보다 작거나 같은 정수 N이 주어진다

풀이
  1. 상향식 dp -> 10을 2로 먼저 나눠서.... 1 로 빼야 최소값...
   1.1 모든 수는 이전 수 + 1이기 때문에 카운트도 +1인 수가 가능하다
*/

#include <iostream>
using namespace::std;
int main(void){
  int count[1000001];
  int N;
  cin >> N;

  count[1] = 0;
  for(int i=2;i<=N;i++){
    count[i] = count[i-1] + 1;
    if(i%3 == 0){
      if(count[i] > count[i/3]+1)
        count[i] = count[i/3]+1;
    }
    if(i%2 == 0){
      if(count[i] > count[i/2]+1)
        count[i] = count[i/2]+1;
    }
  }
  
  cout << count[N];
  return 0;
}
