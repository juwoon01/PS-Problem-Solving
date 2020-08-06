#include <iostream>
using namespace::std;

int main(void){
  int n, m=0;
  cin >> n;

  for(int i=n/2;i<n;i++){
    int answer=i;
    for(int k=1; n/k>0; k*=10){
      answer+=(i%(k*10))/k;
    }

    if(answer == n ){
      cout << i;
      return 0;
    }
  }

  cout << 0;

  return 0;
}
