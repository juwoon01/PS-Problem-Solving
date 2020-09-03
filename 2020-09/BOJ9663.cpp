#include <iostream>
#include <vector>

using namespace::std;
int n;
bool board[15][15];

void impossible(int row,int column){
  //board[row]=false;
  board[][column]=false;
}

void dfs(int row,int column){
  if(column == n-1){

  }else{
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(board[i][j]){
          impossible(i,j);
        //  dfs(i,j+1);
        }
        else{
          continue;
        }


      }
    }

  }
}

int main(void){

  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      board[i][j]=true;
    }
  }
  dfs(0,0);

  return 0;
}
