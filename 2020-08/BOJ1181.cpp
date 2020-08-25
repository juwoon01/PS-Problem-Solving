#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace::std;
bool compare(string a, string b){
  if(a.size()==b.size()){
          return a<b;
      }else{
          return a.size()<b.size();
      }
  }


int main(void){
  int n;
  cin >> n;
  vector<string> arr;
  string str;

  for(int i=0;i<n;i++){
    cin >> str;
    arr.push_back(str);
  }
  sort(arr.begin(),arr.end(),compare);
/*
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){

      if(arr[j].length()>arr[j+1].length()){
        string tmp;
        tmp= arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tmp;
      }
      else if(arr[j].length()==arr[j+1].length()){
        if(arr[j].compare(arr[j+1])==1){
          string tmp;
          tmp= arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=tmp;
        }
      }

    }
  }
*/
string tmp;
for(int i=0;i<n;i++){
     if(tmp==arr[i])continue;
     cout<<arr[i]<<'\n';
     tmp=arr[i];
 }


  return 0;
}
