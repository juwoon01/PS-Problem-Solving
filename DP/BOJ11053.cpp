/*https://www.acmicpc.net/problem/11053*/
/*
가장 긴 증가하는 부분 수열
수열 A가 주어졌을 때,
가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에
가장 긴 증가하는 부분 수열은 A = {10, 20, 30, 50} 이고,
길이는 4이다.

첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.
둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1,000)

출력
첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다.

풀이
  1.1 전부 돌려본다.
*/

#include <iostream>
#include <math.h>
using namespace::std;

int main(void){
  int A[1000];
  int N;

  cin >> N;
  for(int i=0;i<N;i++){
    cin >> A[i];
  }

  int result = 0;
  for(int i=0; i<N-1; i++){
    int MAX = A[i];
    int count = 1;
    for(int j=i+1; j<N; j++){
      if(A[j] > MAX){
        MAX = A[j];
        count++;
      }
    }

    if(count > result){
      result = count;
    }
  }

  cout << result;

  return 0;
}
