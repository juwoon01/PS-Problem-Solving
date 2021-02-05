/*
문제
n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다.
ai의 값은 1보다 크거나 같고, 1000000보다 작거나 같은 자연수이다.
자연수 x가 주어졌을 때, ai + aj = x (1 ≤ i < j ≤ n)
을 만족하는 (ai, aj)쌍의 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 수열의 크기 n이 주어진다.
다음 줄에는 수열에 포함되는 수가 주어진다.
셋째 줄에는 x가 주어진다. (1 ≤ n ≤ 100000, 1 ≤ x ≤ 2000000)

출력
문제의 조건을 만족하는 쌍의 개수를 출력한다.

풀이
  단순 비교시(2중 for문) timeout이 예상됨

  1. bool 배열을 선언
  2. bool[X - 값] 이 참 이면 카운트 후 bool[값]을 참으로 할당.
   2.1 X의 값이 최대 200만 이기 때문에 배열을 200만으로 잡아야 한다
    2.1.1 int 200만이면 8000000byte = 8000KB = 8MB
*/

#include <iostream>
using namespace::std;
int main(void){
  int N, X;
  int A[100001];
  bool num[2000001] = {false};
  int result = 0;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  cin >> X;

  for(int i = 0; i < N; i++){
    if(X-A[i] > 0)
      if(num[X-A[i]])
        result++;

    num[A[i]] = true;
  }

  cout << result;
  return 0;
}
