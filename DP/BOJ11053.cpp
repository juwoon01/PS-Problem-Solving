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
  1. 전체를 돌린다 -> 10 20 30 1 2 3 100 10 12 -> (1 ,2, 3, 100) 원하는 답: (1, 2, 3, 10, 12)
  2. 각 순간의 최대값을 dp로 저장 -> 값보다 크면 +1

*/

#include <iostream>
using namespace::std;

int main(void){
  int A[1000];
  int dp[1000];
  int N;
  int max = 1;
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  dp[0] = 1;

  for(int i=1;i<N;i++){
    int now = 0;
    for(int j=0;j<i;j++){
      if(A[i] > A[j]){
        now = dp[j] > now ? dp[j] : now;
      }
    }
    dp[i] = now+1;
    if(dp[i] > max){
      max = dp[i];
    }
  }

  cout << max;

  return 0;
}
