#include <iostream>
#include <string>

using namespace::std;
int main(void){
  string s;
  cin >> s;

  int answer;
  for(char a = 'a'; a<='z'; a++){
    answer = s.find(a);
    cout << answer << " ";
  }


  return 0;
}
