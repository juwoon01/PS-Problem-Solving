#include <iostream>

using namespace::std;

int main(void){
  int t;
  cin >> t;
  int n;

  int max = 10000;
  bool arr[10001];

  for(int i=2; i<=max; i++){
    arr[i]=true;
  }

    for(int i=2; i*i<=max; i++){
      if(arr[i]){
        for(int j=i*i;j<=max;j+=i){
          arr[j]=false;
        }
      }
    }



  for(int i=0;i<t;i++){
    cin >> n;
    int mid=n/2;
    int j,k;
    for(j=k=mid;;j--, k++){
      if(arr[j] && arr[k]){
          cout << j <<' ' << k << endl;
          break;
      }
    }

  }


  return 0;
}
