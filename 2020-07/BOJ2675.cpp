#include <iostream>
#include <string>

using namespace::std;
int main(void){
  string s;
  string p;
  int r;
  int t;
  cin >> t;


  for(int i=0; i<t; i++){
    cin >> r;
    cin >> s;

    for(int j=0; j<s.length(); j++){
      for(int k=0; k< r; k++){
        cout << s.at(j);
      }

    }
  cout << '\n';
  }


  return 0;
}
