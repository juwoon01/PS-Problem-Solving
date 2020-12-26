/*
1. 가능한 모든 퀸 배치 구현
2. 각 열에 퀸 하나만 배치 구현
  2.1 열 flag를 통해 구현
3. 대각선 구현
  3.1 왼쪽 대각선, 오른쪽 대각선 flag를 통해 구현
*/


#include <iostream>
using namespace::std;
int pos[8];//값이 열
int flag[8];
void print(){
  int i;
  for(i = 0; i < 8; i++){
    cout << pos[i];
  }
  cout << endl;
}

void set(int num){// 행이 num 열이 i
  int i;
  for(i=0;i<8;i++){
    if(flag[i] == 0){
      pos[num] = i;

      if(num == 7){
        print();
      }
      else{
        flag[i] = 1;
        set(num+1);
        flag[i] = 0;
      }

    }
  }

}

int main(void){
  int i;
  for(i=0;i<8;i++){
    flag[i]=0;
  }
  set(0);


  return 0;
}
