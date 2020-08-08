#include <iostream>
using namespace::std;

int main(void){
  int n,m;
  char startW[8][8];
  char startB[8][8];
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
      cout <<   startB[i][j];
    }
    cout << endl;
  }
  cin >> n >> m;
  int arr[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> arr[i][j];
    }
  }



  return 0;
}
