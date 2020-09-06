#include <iostream>
using namespace::std;
int n;
int cal[4];
int arr[11];
int result_min=1000000001;
int result_max=-1000000001;

int calc(int num, int a, int b){
  if(num==0){
    return a+b;
  }
  else if(num==1){
      return a-b;
  }
  else if(num==2){
      return a*b;
  }
  else{
      return a/b;
  }
}

void dfs(int dep,int result){

  if(dep==n-1){
    if(result>result_max){
      result_max=result;
    }
    if(result<result_min){
      result_min=result;
  }
  return;
}
  for(int i=0;i<4;i++){
    if(cal[i] == 0){
      continue;
    }
    else{
      cal[i]--;
      int before_result = result;
      result = calc(i,result,arr[dep+1]);
      dfs(dep+1,result);
      cal[i]++;
      result = before_result;
    }
  }
}

int main(void){

  cin >> n;


  for(int i=0;i<n;i++){
    cin >> arr[i];
  }


  for(int i=0;i<4;i++){
    cin >> cal[i];
  }

  dfs(0,arr[0]);

  cout << result_max <<'\n';
  cout << result_min;
  return 0;
}


/*
a[11],s[4],m=1e9,M=-1e9,n;
back(r,x){
  int i=0;
  if(x==n){
    M=M>r?M:r,m=m<r?m:r;return;
  }
  for(;i<4;i++)
  if(s[i])
  s[i]--,back(i?i-1?i-2?r/a[x]:r*a[x]:r-a[x]:r+a[x],x+1),s[i]++;
}
main(i){
  for(i=0,scanf("%d",&n);i<n+4;i++)
  scanf("%d",n>i?a+i:s+i-n);

  back(a[0],1);
  printf("%d %d",M,m);
}
*/
