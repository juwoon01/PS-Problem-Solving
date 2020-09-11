#include <iostream>
using namespace::std;
int count[2];
void fibo(int n){
  if(n == 0 ){
    count[0]++;
    return;
  }
  else if(n==1){
    count[1]++;
    return;
  }
  else{
    fibo(n-1);
    fibo(n-2);
    return;
  }
}

int main(void){
  int t;
  cin >> t;
  int arr[t];
  for(int i=0;i<t;i++){
    cin >> arr[i];
  }

  for(int i=0;i<t;i++){
    count[0]=0;
    count[1]=0;
    fibo(arr[i]);
    cout << count[0] <<" "<<count[1] << "\n";
  }

  return 0;
}
