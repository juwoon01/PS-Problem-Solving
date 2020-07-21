#include <iostream>

using namespace::std;

int main(void){
  int m, n;

  cin >> m >> n;
  bool arr[n+1];
  arr[0]=false;
  arr[1]=false;
  for(int i=2; i<=n; i++){
    arr[i]=true;
  }

  for(int i=2; i*i<=n; i++){
    if(arr[i]){
      for(int j=i*i;j<=n;j+=i){
        arr[j]=false;
      }
    }
  }

  for(int i=m;i<=n;i++){
    if(arr[i]){
      cout << i << '\n';
    }
  }


  return 0;
}
