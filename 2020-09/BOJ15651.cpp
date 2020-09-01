#include <iostream>
#include <vector>

using namespace::std;
int n,m;
vector<int> stack;

void dfs(int count){
  if(count==m){
    for(int i=0;i<m;i++){
      cout << stack[i] << " ";
    }
    cout << "\n";
    return;
  }
  for(int i=1;i<=n;i++){
    stack.push_back(i);
    dfs(count+1);
    stack.pop_back();
  }
}

int main(void){

  cin >> n >> m;
  dfs(0);

  return 0;
}
