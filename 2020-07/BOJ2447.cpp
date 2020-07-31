#include <iostream>
using namespace::std;

void check(int i, int j, int n){
  if(i%3==1 && j%3==1){
    cout << ' ';
  }
  else if((j/n)%3==1 && (i/n)%3==1){
    cout << ' ';
  }
  else{
    if(n==3){
      cout << '*';
    }
    else{
      check(i,j,n/3);
    }
  }
}


int main(void){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      check(i,j,n);

    }
    cout << '\n';
  }
  return 0;
}
