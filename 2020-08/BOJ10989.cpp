#include <iostream>
using namespace::std;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  int count[10001] ={0};
  cin >> n;

  int num;
  for(int i=0;i<n;i++){

    cin >> num;
    count[num]++;
  }

  for(int i=1;i<=10000;i++){
    for(int j=0; j < count[i]; j++){
      cout << i << '\n' ;
    }
  }
  return 0;
}
