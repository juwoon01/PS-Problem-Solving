#include <iostream>


using namespace::std;
int n,m;
int check[9];
int stack[8];
void dfs(int count){
  if(count==m){
    for(int i=0;i<m;i++){
      cout << stack[i] << " ";
    }
    cout << "\n";
    return;
  }
  for(int i=1;i<=n;i++){
    if (!check[i]) {
              check[i] = true;
              stack[count] = i;
              dfs(count+1);
              check[i] = false;
          }
  }
}

int main(void){

  cin >> n >> m;

  for(int i=0;i<n;i++){
    dfs(i);
  }


  return 0;
}
