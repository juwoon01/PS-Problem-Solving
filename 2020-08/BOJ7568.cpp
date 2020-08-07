#include <iostream>
using namespace::std;

int main(void){
  int n;
  cin >> n;
  int arr[n][3];
  for(int i=0;i<n;i++){
    cin >> arr[i][0] >> arr[i][1];
    arr[i][2]=1;
  }

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i][0]>arr[j][0] && arr[i][1]>arr[j][1] ){
        arr[j][2]++;
      }
      else if(arr[i][0]<arr[j][0] && arr[i][1]<arr[j][1]){
        arr[i][2]++;
      }
    }
  }

  for(int i=0;i<n;i++){
    cout << arr[i][2] << ' ';
  }


  return 0;
}
