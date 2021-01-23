#include <iostream>
using namespace::std;

int main(void){
  int n;
  cin >> n;

  for(int i=0; i < 2*n+3 ; i++){
    if(i == 0 || i == 2*n+2){
      cout << "*";
    }
    else{
      cout << "*";
      if(i < n+2){
        for(int j = 0; j < i-1 ;j++){
          cout << "@";
        }
      }
      else{
        for(int j = 0; j <= 2*n-i ;j++){
          cout << "@";
        }
      }
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
