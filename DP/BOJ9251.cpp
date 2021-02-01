/*https://www.acmicpc.net/problem/9251*/
/*
LCS(Longest Common Subsequence, 최장 공통 부분 수열)
두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다.
예를 들어, ACAYKP와 CAPCAK의 LCS는 ACAK가 된다.
ABAB AAB
입력
첫째 줄과 둘째 줄에 두 문자열이 주어진다.
문자열은 알파벳 대문자로만 이루어져 있으며,
최대 1000글자로 이루어져 있다.

출력
첫째 줄에 입력으로 주어진 두 문자열의 LCS의 길이를 출력한다.

풀이
  1. 2차원 배열 테이블 생성, 첫 행열은 0
  2. 한 단어씩 다른 문자열 모두 검사
  3. 각 요소에는 모두 할당 하는 순간의 LCS를 할당한다.
    3.1 값이 같을때는 dp[i-1][j-1]의 값에 +1
      3.1.1 dp[i-1][j-1]이 해당 문자가 추가되기 전의 LCS이다.
    3.2 값이 다를때는 왼쪽이나 위의 값중 큰값이 LCS이다.
*/

#include <iostream>
#include <string>
using namespace::std;

int main(void){
  string s1, s2;
  int dp[1001][1001] = {0,};
  cin >> s1 >> s2;

  for(int i = 0; i < s1.length(); i++){
    for(int j = 0; j < s2.length(); j++){
      if(s1[i] == s2[j])
         dp[i + 1][j + 1] = dp[i][j] + 1;
       else
         dp[i + 1][j + 1] = (dp[i + 1][j] > dp[i][j + 1]) ? dp[i + 1][j] : dp[i][j + 1] ;
     }
   }

   cout << dp[s1.length()][s2.length()];

  return 0;
}
