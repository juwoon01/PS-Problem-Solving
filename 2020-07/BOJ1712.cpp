#include <iostream>
#include <string>

using namespace::std;

int main(void){
  int a;
  int b;
  int c;

  cin >> a >> b >> c;


  if(b>=c){
    cout << -1;
  }
  else{
    cout << a/(c-b)+1;
  }

  return 0;
}
