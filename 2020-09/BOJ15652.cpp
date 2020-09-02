#include <iostream>
#include <vector>

using namespace::std;
int n,m;
vector<int> stack;

void dfs(int count, int num){
  if(count==m){
    for(int i=0;i<m;i++){
      cout << stack[i] << " ";
    }
    cout << "\n";
    return;
  }
  for(int i=num;i<=n;i++){
    stack.push_back(i);
    dfs(count+1,i);
    stack.pop_back();
  }
}

int main(void){

  cin >> n >> m;
  dfs(0,1);

  return 0;
}
