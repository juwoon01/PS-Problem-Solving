#include <iostream>

using namespace::std;

int prime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}

int main(void){
  int n = 1;
  while(n != 0){
    int count = 0;
    cin >> n;
    for(int i=n+1; i<=n*2;i++){
      if(prime(i)){
        count++;
      }
    }

    cout << count << '\n';
  }

  return 0;
}
