#include <iostream>

using namespace::std;

int main(void){
  int p[4][2];

  cin >> p[0][0] >> p[0][1];
  cin >> p[1][0] >> p[1][1];
  cin >> p[2][0] >> p[2][1];
  int x,y;
  x=(p[0][0]^p[1][0])^p[2][0];
  y=(p[0][1]^p[1][1])^p[2][1];
  cout <<  x <<' '<<y;
/*  for(int i=0;i<2;i++){
    if(p[0][i]!=p[1][i]){
      if(p[0][i]!=p[2][i]){
        p[3][i]=p[0][i];
      }
      else{
          p[3][i]=p[1][i];
      }
    }
    else{
        p[3][i]=p[2][i];
    }
  }

  cout << p[3][0] <<' '<< p[3][1];
*/

  return 0;
}
