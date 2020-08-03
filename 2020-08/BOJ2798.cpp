#include <iostream>
using namespace::std;

int main(void){
  int n, m;
  cin >> n >> m;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int answerArr[n*(n-1)*(n-2)];
  int count=0;

  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
        if(arr[i]+arr[j]+arr[k]<=m){
          answerArr[count]=arr[i]+arr[j]+arr[k];
          count++;
        }
      }
    }
  }

  int answer=answerArr[0];
  for(int i=1;i<count;i++){
    if(answerArr[i]>answer){
      answer=answerArr[i];
    }
  }

  cout << answer;

  return 0;
}
