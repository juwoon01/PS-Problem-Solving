/*https://www.acmicpc.net/problem/2156*/
/*
동적계획법
포도주 잔을 선택하면 그 잔에 들어있는 포도주는 모두 마셔야 하고,
마신 후에는 원래 위치에 다시 놓아야 한다.
연속으로 놓여 있는 3잔을 모두 마실 수는 없다.
효주는 될 수 있는 대로 많은 양의 포도주를 맛보기 위해서
어떤 포도주 잔을 선택해야 할지 고민하고 있다.
1부터 n까지의 번호가 붙어 있는 n개의 포도주 잔이 순서대로 테이블 위에 놓여 있고,
각 포도주 잔에 들어있는 포도주의 양이 주어졌을 때,
효주를 도와 가장 많은 양의 포도주를 마실 수 있도록 하는 프로그램을 작성하시오.

예를 들어 6개의 포도주 잔이 있고,
각각의 잔에 순서대로 6, 10, 13, 9, 8, 1 만큼의 포도주가 들어 있을 때,
첫 번째, 두 번째, 네 번째, 다섯 번째 포도주 잔을 선택하면 총 포도주 양이 33으로 최대로 마실 수 있다.

첫째 줄에 포도주 잔의 개수 n이 주어진다.
(1≤n≤10,000) 둘째 줄부터 n+1번째 줄까지 포도주 잔에 들어있는 포도주의 양이 순서대로 주어진다.
포도주의 양은 1,000 이하의 음이 아닌 정수이다.

풀이
  1. 연속3번 금지, 최대한 많은 양 -> 가능한 수를 전부 해본다 -> 재귀 -> 시간초과

  2. DP
    2.1 점화식 찾기
      2.1.1 가능한 경우의 수: 1 2 4, 1 3 4, 1 3 5 , 2 3 5
      2.1.2 축적값 = 현재값 + 이전축적값 : 3번 연속 문제 발생
      2.1.3 축적값 = 현재값 + 이전값 + 전전전 축적값, 현재값 + 전전축적값, 이전축적값
      2.1.4 DP[N] = wine[N] + wine[N-1] + DP[N-3], DP[N] = wine[N] + DP[N-2], DP[N] = DP[N-1]

  계단 문제와 비슷했다.
*/

#include <iostream>
#include <math.h>
using namespace::std;
// void recu(int index, int count){
//   if(index > N){
//     if(sum > result){
//       result = sum;
//       sum = 0;
//     }
//     return;
//   }
//     if(count == 0){
//       recu(index+1,2);
//     }
//     sum += wine[index];
//     recu(index+1,count-1);
//     sum -= wine[index];
// } 시간초과

int checkMax(int num1, int num2, int num3){
  return (num1 > num2 ?
  ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3 ));
}

int main(void){
  int N;
  int wine[10000];
  int dp[10000];
  int result;
  int sum = 0;

  cin >> N;
  for(int i=0;i<N;i++){
    cin >> wine[i];
  }

  if(N == 1){
    cout <<  wine[0];
    return 0;
  }
  else if(N == 2){
    cout <<  wine[0] + wine[1];
    return 0;
  }
  else if(N == 3){
    cout << checkMax(wine[0] + wine[1], wine[0] + wine[2], wine[1] + wine[2]);
    return 0;
  }

  dp[0] = wine[0];
  dp[1] = wine[0] + wine[1];
  dp[2] = checkMax(dp[1], wine[2] + dp[0], wine[2] + wine[1]);

  for(int i=3;i<N;i++){
    dp[i] = checkMax(dp[i-1], wine[i] + dp[i-2], wine[i] + wine[i-1] + dp[i-3]);
  }

  result = dp[N-1];
  cout << result;
  return 0;
}
