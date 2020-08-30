#include <iostream>
#include <vector>
using namespace::std;

int arr[8] = {1,2,3,4,5,6,7,8};
vector<int> stack;
int n,m;
void dfs(int index, int count){
  if(count==m){
    for(int i=0;i<m;i++){
      cout << stack[i]  <<' ';
    }
    cout << '\n';
    return;
  }
  else{
    for(int i=index; i<n; i++){
      stack.push_back(arr[i]);
      dfs(i+1,count+1);
      stack.pop_back();
    }

  }
}

int main(void){
  cin >> n >> m;
  dfs(0,0);

  return 0;
}
