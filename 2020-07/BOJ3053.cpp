#include <iostream>
using namespace::std;

int main(void){
  int r;
  cin >> r;
  cout << fixed;
  cout.precision(6);
  cout <<  3.14159265358979323846*r*r<<endl;
  cout << 2*r*r<<endl;
  return 0;
}
