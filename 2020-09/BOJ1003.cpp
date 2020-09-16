#include <iostream>
using namespace::std;

int main(void){
  int t;
  cin >> t;
  int arr[t];
  for(int i=0;i<t;i++){
    cin >> arr[i];
  }

  for(int i=0;i<t;i++){
    int answer[2] = {0,0};
    int ppre[2] = {1,0};
    int pre[2] ={0,1};
    if(arr[i] == 0){
      answer[0] = ppre[0];
      answer[1] = ppre[1];
    }
    else if(arr[i] == 1){
      answer[0] = pre[0];
      answer[1] = pre[1];
    }
    else{
      for(int j=2;j<=arr[i];j++){
        answer[0] = pre[0]+ppre[0];
        ppre[0]=pre[0];
        pre[0]=answer[0];
        answer[1] = pre[1]+ppre[1];
        ppre[1]=pre[1];
        pre[1]=answer[1];
      }
    }

    cout << answer[0] <<" "<<answer[1] << "\n";
  }

  return 0;
}

/*
//timeout
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
*/
