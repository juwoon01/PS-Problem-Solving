#include <iostream>
using namespace::std;
int main(void){
  int n;
  int answer=0;
  cin >> n;

  char arr[n];
  cin >> arr;

  int i;
  for(i=0; i<n; i++){
    answer = answer + ((int)arr[i]-48);
  }
  cout << answer;
  return 0;
}
