#include <iostream>
using namespace::std;

int fac(int num){
  if(num==0){
    return 1; 
  }
  else{
    return num * fac(num-1);
  }
}

int main(void){
  int n;
  cin >> n;
  int answer = fac(n);
  cout << answer;
  return 0;
}
