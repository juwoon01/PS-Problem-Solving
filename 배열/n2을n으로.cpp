/*
  배열에서 두 원소의 합이 100이 되는 수가 존재하면 1
  존재하지 않으면 0을 반환
*/

#include <iostream>
using namespace::std;
int main(void){
  bool num[101];
  int arr[5] = {1,23,52,77,60};

  for(int i=0; i<5; i++){
    if(num[100-arr[i]]){
      cout << 1;
      return 0;
    }
    num[arr[i]] = true;
  }

  cout << 0;
  return 0;
}
