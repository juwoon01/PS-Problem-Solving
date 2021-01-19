/*https://www.acmicpc.net/problem/1003*/
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
 1, 1, 1, 2, 3, 2....
*/

#include <iostream>
using namespace::std;

int main(){
  int N;
  cin >> N;
  int count[N+1];

  for(int i=1;i<=N;i++){
    int taget = i;
    count[i] = 0;
    while(true){
      if(count[taget] != 0){
        count[i] += count[taget];
        break;
      }
      if(taget == 1)
        break;

      if(taget%3 == 0){
        count[i]++;
        taget /= 3;
      }
      else if(i%2 == 0){
        count[i]++;
        taget /= 2;
      }
      else{
        count[i]++;
        taget--;
      }
    }

  }

  cout << count[N];
  return 0;
}
