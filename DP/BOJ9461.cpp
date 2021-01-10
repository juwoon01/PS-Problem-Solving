/*https://www.acmicpc.net/problem/9461*/
/*
동적계획법
파도반 수열 P(N)은 나선에 있는 정삼각형의 변의 길이이다.
P(1)부터 P(10)까지 첫 10개 숫자는 1, 1, 1, 2, 2, 3, 4, 5, 7, 9이다.
N이 주어졌을 때, P(N)을 구하는 프로그램을 작성하시오.
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. (1 ≤ N ≤ 100)

풀이
  1. n의 수는 n-1 + n-5 이다.
  2. 상향식 dp
*/

#include <iostream>
using namespace::std;

int main(void){
  int T,N;
  long long fibo[101];
  fibo[1] = 1;fibo[2] = 1;fibo[3] = 1;fibo[4] = 2;fibo[5] = 2;
  cin >> T;

  for(int i=0;i<T;i++){
    cin >> N;

    if(!(N<=5)){
      for(int j=6;j<=N;j++){
        fibo[j] = fibo[j-1] + fibo[j-5];
      }
    }

    cout << fibo[N] << '\n';
  }

  return 0;
}
