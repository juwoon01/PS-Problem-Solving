#include <iostream>
using namespace::std;

int arr[20];

void print(int index){
  for(int i=0;i<index;i++){
    cout << arr[i];
    if(i != index-1){
      cout << "+";
    }
  }
  cout << "\n";
}
int division(int n, int m, int index) {
   int count =0;
   int i;

   if(n < m)
    m = n;
   if(n==0){
        print(index);
        return 1;
   }

   for(i = 1; i <= m; i++){//m까지 m번 // 6,2면 1,2 끝
     arr[index] = i;
     count+= division(n-i,i,index+1);
   }
   return count;
}

int main(void){
  int N,M;
  int num=0;
  cin >> N;
  cin >> M;
  num = division(N, M, 0);
  cout << num;



  return 0;
}
