/*https://www.acmicpc.net/problem/1932*/
/*
동적계획법
        7
      3   8
    8   1   0
  2   7   4   4
4   5   2   6   5
위 그림은 크기가 5인 정수 삼각형의 한 모습이다.
맨 위층 7부터 시작해서 아래에 있는 수 중 하나를 선택하여 아래층으로 내려올 때,
이제까지 선택된 수의 합이 최대가 되는 경로를 구하는 프로그램을 작성하라. 아래층에 있는 수는 현재 층에서 선택된 수의 대각선 왼쪽 또는 대각선 오른쪽에 있는 것 중에서만 선택할 수 있다.
삼각형의 크기는 1 이상 500 이하이다.
삼각형을 이루고 있는 각 수는 모두 정수이며, 범위는 0 이상 9999 이하이다.
첫째 줄에 삼각형의 크기 n(1 ≤ n ≤ 500)이 주어지고,
둘째 줄부터 n+1번째 줄까지 정수 삼각형이 주어진다.
첫째 줄에 합이 최대가 되는 경로에 있는 수의 합을 출력한다.

풀이
  1. 모든 경로 탐색
  2. 왼쪽 대각선 = 이전 index, 오른쪽 대각선= 이전 index+1 -> 시간초과
  3. 동적계획법 사용

*/

#include <iostream>
using namespace::std;
int tri[500][500];
int T;
int MAX = -1;
int path;
int d[500];
/*
void dp(int depth, int index){
  if(depth == T){
    if(path > MAX){
      MAX = path;
    }
  }
  else{
    path += tri[depth][index];
    dp(depth+1,index);
    path -= tri[depth][index];
    path += tri[depth][index+1];
    dp(depth+1,index+1);
    path -= tri[depth][index+1];
  }

}
*///시간초과

int max(int left, int right){
  if(left > right){
    return left;
  }
  else{
    return right;
  }
}

int main(void){
  int N;
  cin >> T;
  for(int i=0;i<T;i++){
    for(int j=0;j<=i;j++){
      cin >> tri[i][j];
    }
  }
  for(int i=0;i<T;i++){
    for(int j=0;j<=i;j++){
      if(j == 0){//왼쪽 끝이면
        tri[i][j] += tri[i-1][j];
      }
      else if(j == i){//오른쪽 끝이면
        tri[i][j] += tri[i-1][j-1];
      }
      else{//중간 = 오,왼중 큰값을 더함
        tri[i][j] += max(tri[i-1][j],tri[i-1][j-1]);
      }
      if(MAX < tri[i][j]) MAX = tri[i][j];
    }
  }
  cout << MAX;
  return 0;
}
