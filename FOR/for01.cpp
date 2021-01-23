#include <iostream>
using namespace::std;

int main(void){
  int n;
  cin >> n;

  for(int i=1;i<=n;i++){
    int count = i;
    for(int j=1;j<=n;j++){
      if(count > n){
        count = 1;
      }
      cout << count++ << ' ';
    }
    cout<<'\n';
  }
  int num = 1;
  for(int i=1;i<=n;i++){

    for(int j = 0; j < n-i; j++){
      cout << '\t';
    }

    for(int j = 0; j < i; j++){
      cout << num++ << '\t';
    }
    cout<<'\n';
  }


  return 0;
}
