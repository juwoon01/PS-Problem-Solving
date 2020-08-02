#include <iostream>
using namespace::std;

void moving(int n, int start, int mid, int end){
  if(n==1){
    cout<< start <<' '<< end << '\n';
  }
  else{
    moving(n-1,start,end,mid);
    cout<< start <<' '<< end << '\n';
    moving(n-1,mid,start,end);
  }
}

int main(void){
  int n;
  cin >> n;
  cout << (1 << n) - 1  << '\n';
  moving(n,1,2,3);
  return 0;
}
