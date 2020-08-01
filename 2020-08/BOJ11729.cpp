#include <iostream>
#include <math.h>


using namespace::std;

int countMoving(int n){
  if(n==1){
    return 1;
  }
  else{
    return pow(2 ,n-1) + countMove(n-1);
  }
}

int main(void){
  int n;
  cin >> n;
  cout << countMoving(n) << endl;



  return 0;
}
