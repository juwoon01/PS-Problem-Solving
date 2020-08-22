#include <iostream>
#include <string>
using namespace::std;

int main(void){
  int n;
  cin >> n;
  string arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){

      if(arr[j].length()>arr[j+1].length()){
        string tmp;
        tmp= arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tmp;
      }
      else if(arr[j].length()==arr[j+1].length()){
        if(arr[j].compare(arr[j+1])==1){
          string tmp;
          tmp= arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=tmp;
        }
      }

    }
  }

  for(int i=0;i<n;i++){
    cout << arr[i] << "\n";
  }

  return 0;
}
