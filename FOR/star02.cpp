#include <iostream>
using namespace::std;
/*
n = 5

                 *
                ***
               *****
              *******
    *        *********        *
   ***      ***********      ***
  *****    *************    *****
 *******  ***************  *******
***********************************

*/
int main(void){
  int n;
  cin >> n;

  for(int i=0;i<n;i++){
    for(int j = 0; j<n*4-2-(i); j++){
      cout << " ";
    }

    for(int k=0;k<i*2-1;k++){
      cout << "*";
    }
    cout << '\n';
  }

  for(int i=1;i<=n;i++){
    for(int j=0;j<n-i;j++){
      cout << " ";
    }

    for(int k=0;k<i*2-1;k++){
      cout << "*";
    }

    for(int j=0;j<n*2-i*2;j++){
      cout << " ";
    }

    for(int k=0;k<((n-1)*2-1)+i*2;k++){
      cout << "*";
    }

    for(int j=0;j<n*2-i*2;j++){
      cout << " ";
    }

    for(int k=0;k<i*2-1;k++){
      cout << "*";
    }

    cout << "\n";
  }



  return 0;
}
