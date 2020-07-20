#include <iostream>
#include <cmath>
using namespace::std;

int main(void){
  int t;
  long long x, y;
  int count;
  cin >> t;

  for(int i=0;i<t;i++){
    cin >> x >> y;
    count=0;
    while(count*count<(y-x)){
      count++;
    }
    long long rem = (y-x) - count*count;
    rem = (long long)ceil((double)rem/(double)count);
    cout << (2*count)-1+rem << '\n';
  }


  return 0;
}
