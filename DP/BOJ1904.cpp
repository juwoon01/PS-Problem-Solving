/*https://www.acmicpc.net/problem/1904*/
/*
동적계획법
N=1일 때 1만 만들 수 있고, N=2일 때는 00, 11을 만들 수 있다.
(01, 10은 만들 수 없게 되었다.)
또한 N=4일 때는 0011, 0000, 1001, 1100, 1111 등 총 5개의 2진 수열을 만들 수 있다.
우리의 목표는 N이 주어졌을 때 지원이가 만들 수 있는 모든 가짓수를 세는 것이다.
단 타일들은 무한히 많은 것으로 가정하자.
첫 번째 줄에 지원이가 만들 수 있는 길이가 N인 모든 2진 수열의 개수를 15746으로 나눈 나머지를 출력한다.

풀이
  1. 1 = 1 / 2 = 00, 11 / 3 = 001, 100, 111 / 4 = 0000, 0011, 1100, 1001, 1111 / 5 = 00001, 00100, 00111, 10000, 10011, 11001, 11100, 11111
  = 1,2,3,5,8 = 피보나치 수열
    1.1 4은 3의 앞에 1을 붙인 수열 + 2의 뒤에 00을 붙인 수열이다.
        5는 4의 앞에 1을 붙인 수열 + 3의 뒤에 00을 붙인 수열이다.

  2. 피보나치 수열 구현
    2.1 상향식 DP 사용

  이 문제는 구현의 어려움 보다는 문제 자체가 피보나치 수열 이라는 것을 도출하는(알아차리는) 것이 주요한 문제였다.
*/

#include <iostream>
using namespace::std;

int main(void){
  int N;

  cin >> N;
  int fibo[N+1];
  fibo[1] = 1;
  fibo[2] = 2;

  for(int i=3;i<=N;i++){
    fibo[i] = (fibo[i-1] + fibo[i-2]) %15746;
  }

  cout << fibo[N];

  return 0;
}
