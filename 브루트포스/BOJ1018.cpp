/*https://www.acmicpc.net/problem/1018*/

/*
체스판 다시 칠하기
  첫째 줄에 N과 M이 주어진다. N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수이다.
  둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.
  다시 칠해야 하는 정사각형 개수의 최솟값을 출력한다
풀이
  1. 목표 보드를 만듬
  2. 행, 열을 늘리며 비교
  3. 가장 낮은 수 출력
*/

#include <iostream>
using namespace::std;
char startW[8][8];
char startB[8][8];
char arr[50][50];


int compare(int i, int j){

  int countW=0;
  int countB=0;
  int n=i+7;//끝지점
  int m=j+7;
  int k,g;

  for(int r = i, k = 0; r<=n; r++,k++){
    for(int c = j, g = 0; c<=m; c++,g++){
      if(arr[r][c]!=startW[k][g]){
        countW++;
      }
      if(arr[r][c]!=startB[k][g]){
        countB++;
      }
    }
  }

  return (countW>countB) ? countB : countW;
}

int main(void){

  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(i%2==0){
        if(j%2==0){
          startW[i][j]='W';
          startB[i][j]='B';
        }
        else{
          startW[i][j]='B';
          startB[i][j]='W';
        }
      }
      else{
        if(j%2==0){
          startW[i][j]='B';
          startB[i][j]='W';
        }
        else{
          startW[i][j]='W';
          startB[i][j]='B';
        }
      }
    }
  }


  int n,m;
  int min = 64;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> arr[i][j];
    }
  }


  for(int i=0;i<=n-8;i++){//시작 지점
    for(int j=0;j<=m-8;j++){
      int com = compare(i,j);
      min = (com<min) ? com : min;
    }
  }

  cout << min;

  return 0;
}
