#include <iostream>

using namespace::std;

int main(void){
  int x,y,w,h;
  int answer;
  int arr[4];

  cin >> x >> y >> w >> h;

  arr[0]=x;
  arr[1]=y;
  arr[2]=w-x;
  arr[3]=h-y;

  answer=arr[0];
  for(int i=0;i<4;i++){
    if(arr[i]<answer){
      answer=arr[i];
    }
  }
  cout << answer;



  return 0;
}
