#include <iostream>
#include <vector>
#include <algorithm>

using namespace::std;

int main(void){
  int n;
  cin >> n;
  vector<pair<int,int>> v(n);

  for(int i=0;i<n;i++){
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
    cout << v[i].first << ' ' << v[i].second << '\n';
  }
  return 0;
}



  /*int main(void){
  int n;
  cin >> n;
  int xy[n][2];
  for(int i=0;i<n;i++){
    cin >> xy[i][0] >> xy[i][1];
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(xy[i][0]==xy[i+1][0]){
        if(xy[i][1]>xy[i+1][1]){
          int tmp[2];
          tmp[0] = xy[i][0];
          tmp[1] = xy[i][1];
          xy[i][0] = xy[i+1][0];
          xy[i][1] = xy[i+1][1];
          xy[i+1][0]=tmp[0];
          xy[i+1][1]=tmp[1];
        }
      }
      else if(xy[i][0]>xy[i+1][0]){
        int tmp[2];
        tmp[0] = xy[i][0];
        tmp[1] = xy[i][1];
        xy[i][0] = xy[i+1][0];
        xy[i][1] = xy[i+1][1];
        xy[i+1][0]=tmp[0];
        xy[i+1][1]=tmp[1];
      }

    }
  }

  for(int i=0;i<n;i++){
    cout << xy[i][0]<< ' ' << xy[i][1] << '\n';
  }

  return 0;
}
  */
