#include <iostream>
#include <vector>
#include <algorithm>

using namespace::std;

int main(void){
  int n;
  cin >> n;
  vector<pair<int,int>> v(n);

  for(int i=0;i<n;i++){
    cin >>  v[i].second >> v[i].first;
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
    cout << v[i].second << ' ' << v[i].first << '\n';
  }
  return 0;
}
