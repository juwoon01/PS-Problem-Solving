#include <iostream>
using namespace::std;

int main(void){
  int n;
  cin >> n;
  int arr[n];
  int answer[4];
  int min=4444;
  int max=-4444;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  answer[0]=0;

  for(int i=0;i<n;i++){

    answer[0] += arr[i];

    if(min > arr[i]){
      min = arr[i];
    }
    if(max < arr[i]){
      max = arr[i];
    }
  }

  int count=0;
  int freq[2]={4444,4444};
  for(int i=0;i<n;i++){
    int currentCount=1;
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        currentCount++;
      }
    }

    if(currentCount>count){
      freq[0] = arr[i];
      count = currentCount;
    }
    else if(currentCount==count){
      if(freq[1]==4444){
        if(arr[i]<freq[0]){
          freq[1]=arr[i];
        }
        else if(arr[i]>freq[0]){
          freq[1]=freq[0];
          freq[0]=arr[i];
        }
      }
      else{
        if(freq[0]>arr[i] && freq[1]<arr[i]){
          freq[0] = arr[i];
        }
        else if(freq[1]>arr[i]){
          freq[0] = freq[1];
          freq[1] = arr[i];
        }
      }
    }

  }



  answer[0] = (answer[0]/n) + 0.5;
  answer[1] = arr[n/2];
  answer[2] = freq[0];
  answer[3] = max - min;

  for(int i=0;i<4;i++){
    cout << answer[i] <<'\n';
  }
  return 0;
}
