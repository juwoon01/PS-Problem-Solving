/*https://www.acmicpc.net/problem/9184*/
/*
동적계획법
if a <= 0 or b <= 0 or c <= 0, then w(a, b, c) returns:
    1

if a > 20 or b > 20 or c > 20, then w(a, b, c) returns:
    w(20, 20, 20)

if a < b and b < c, then w(a, b, c) returns:
    w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)

otherwise it returns:
    w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)

입력은 세 정수 a, b, c로 이루어져 있으며, 한 줄에 하나씩 주어진다.
입력의 마지막은 -1 -1 -1로 나타내며, 세 정수가 모두 -1인 경우는 입력의 마지막을 제외하면 없다.
입력으로 주어진 각각의 a, b, c에 대해서, w(a, b, c)를 출력한다.
-50 ≤ a, b, c ≤ 50

풀이
  1. 위의 재귀함수 구현 -> 시간 초과
    1.1 하나라고 0 또는 음수가 될때까지 -1 하며 재귀
  2. 동적계획법 사용
    2.1 결과값들을 3차원 배열에 저장하여 재사용.
*/

#include <iostream>
using namespace::std;

int dp[21][21][21];
int w(int a, int b, int c){

    if(a <= 0 || b <= 0 || c <= 0){ //하나라도 0 또는 음수가 될때까지 재귀
      return 1;
    }
    else if(a > 20 || b> 20 || c > 20){
      return w(20,20,20);
    }

    if(dp[a][b][c] == 0){
      if(a < b && b < c){
        dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
      }
      else{
        dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
      }
    }

    return dp[a][b][c];
}


int main(void){
  int a,b,c;

  while(1){
    cin >> a >> b >> c;
    if(a == -1 && b == -1 && c == -1){
      break;
    }

    cout << "w(" << a << ", "<< b << ", " << c <<") = " << w(a,b,c) << '\n';
  }

  return 0;
}
