#include <iostream>

using namespace::std;

int main(void){
  int n;
  int max = 246912;
  bool arr[246913];
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
  while(true){
    cin >> n;
    if(n==0){
      break;
    }
    int count = 0;

    for(int i=n+1; i<=2*n;i++){
      if(arr[i]){
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
