#include <iostream>
using namespace::std;

int main(void){
  int n;
  int arr[10];
  cin >> n;
  int count=0;
  for(;n>0;count++){
    arr[count]=n%10;
    n=n/10;
  }
  count--;
  for(int i=0;i<count;i++){
    for(int j=0;j<count-i;j++){
      if(arr[j]<arr[j+1]){
        int temp;
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

  for(int i=0;i<=count;i++){
    cout << arr[i];
  }
  return 0;
}
