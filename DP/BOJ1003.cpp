/*https://www.acmicpc.net/problem/1003*/
/*
동적계획법
int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
}
일때 1과 0의 호출 수
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다.
 N은 40보다 작거나 같은 자연수 또는 0이다.
각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.

풀이
  1. 단순 카운터 -> 시간초과
  2. 동적계획법 사용 (결과를 저장해서 꺼내씀)
    2.1 fi(2) = 0 한번 1 한번을 저장하여 바로 결과로 사용.
    2.2 하향식은 코드가 간결하지 못할것 같아서 for문을 이용한 상향식으로 구현
*/

#include <iostream>
using namespace::std;
int countZero;
int countOne;
int fiboDataZero[40];
int fiboDataOne[40];

void fibonacci(int n) {

    fiboDataZero[0] = 1;
    fiboDataZero[1] = 0;
    fiboDataOne[0] = 0;
    fiboDataOne[1] = 1;

    for(int i =2;i<=n;i++){
      fiboDataZero[i] = fiboDataZero[i-1] + fiboDataZero[i-2];
      fiboDataOne[i] = fiboDataOne[i-1] + fiboDataOne[i-2];
    }
      cout << fiboDataZero[n] << ' ' << fiboDataOne[n] << '\n';
}

int main(void){
  int T;
  int N;

  cin >> T;

  for(int i=0;i<T;i++){
    cin >> N;
    countZero = 0;
    countOne = 0;
    fibonacci(N);
  }
  return 0;
}
