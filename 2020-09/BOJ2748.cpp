#include <iostream>
using namespace::std;

int main(void){
  long long arr[91];
  int n;
  scanf("%d",&n);

  arr[0]=0;
  arr[1]=1;
  for(int i=2;i<=n;i++){
    arr[i]=arr[i-1]+arr[i-2];
  }

  printf("%lld",arr[n]);


  return 0;
}
/*
int main(void){
  long long first=1;
  long long second=1;
  int n;
  scanf("%d",&n);


  for(int i=2;i<n;i++){
    long long tmp=second;
    second=first+second;
    first=second;
  }

  printf("%lld",second);


  return 0;
}
*/
