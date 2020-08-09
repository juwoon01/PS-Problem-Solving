#include <iostream>
using namespace::std;
char startW[8][8];
char startB[8][8];
char arr[50][50];


int compare(int i, int j){

  int countW=0;
  int countB=0;
  int n=i+8;
  int m=j+8;
  for(int r=i;r<n;r++){
    for(int c=j;c<m;c++){
      if(arr[r][c]!=startW[r][c]){
        countW++;
      }
      if(arr[r][c]!=startB[r][c]){
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
  cin >> n >> m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> arr[i][j];
    }
  }

  int min=64;
  for(int i=0;i<=n-8;i++){
    for(int j=0;j<=m-8;j++){
      min =  (min>compare(i,j)) ? compare(i,j) : min;
      cout << min << " ";
    }
  }

  cout << min;


  return 0;
}
