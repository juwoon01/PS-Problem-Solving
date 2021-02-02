/*
제곱수
   N이 제곱수이면 1을 아니면 0을 반환하라, N은 10억 이하의 자연수이다.
*/

#include <iostream>
using namespace::std;
int main(void){
  int N;
  cin >> N;

  for(int i=1; i * i <= N; i++){
    if(i*i == N){
      cout << 1;
      return 0;
    }
  }

  cout << 0;
  return 0;
}
