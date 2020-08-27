#include <iostream>
using namespace::std;

int main(void){
  int n;
  int count[10001] ={0};
  int num;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> num;
    count[num]++;
  }

  for(int i=1;i<10000;i++){
    for(int j=0; j < count[i]; j++){
      cout << i << '\n' ;
    }
  }
  return 0;
}
