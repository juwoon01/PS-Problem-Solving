/*https://www.acmicpc.net/problem/2565*/
/*
전깃줄
첫째 줄에는 두 전봇대 사이의 전깃줄의 개수가 주어진다.
전깃줄의 개수는 100 이하의 자연수이다.
둘째 줄부터 한 줄에 하나씩 전깃줄이 A전봇대와 연결되는 위치의 번호와 B전봇대와 연결되는 위치의 번호가 차례로 주어진다.
위치의 번호는 500 이하의 자연수이고, 같은 위치에 두 개 이상의 전깃줄이 연결될 수 없다.
첫째 줄에 남아있는 모든 전깃줄이 서로 교차하지 않게 하기 위해 없애야 하는 전깃줄의 최소 개수를 출력한다.

풀이
  1.  교차: 다른 줄의 a 가 크고(작고) b가 작으면(크면) 교차
  1.1 각 줄에 교차 수를 찾아 가장 큰 줄을 제거 -> 반복 ? 너무 오래걸릴것 같다

  2.  key = b value = a 로 a를 정렬 후 b의 최고 길이 부분 증가 수열이 교차하지 않은 전깃줄의 최대 개수이다.
      (다른 줄의 a 가 클때 b가 작으면 교차이기 때문에)
*/

#include <iostream>
using namespace::std;
#include<algorithm>
int main(void){
  int N;
  int A[501];
  int index[501];
  int dp[501];
  int max = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    A[a] = b;
    index[i] = a; //key 역할
  }

  sort(index, index+N);

  dp[0] = 1;

  for(int i=1; i < N; i++){
    int now = 0;
    for(int j = 0; j < i; j++){
      if(A[index[i]] > A[index[j]]){
        now = dp[j] > now ? dp[j] : now;
      }
    }
    dp[i] = now+1;
    if(dp[i] > max){
      max = dp[i];
    }
  }

  cout << (N-max);

  return 0;
}
