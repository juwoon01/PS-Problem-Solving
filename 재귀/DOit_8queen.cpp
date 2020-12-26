/* 한정 조작, 분기 한정법
1. 가능한 모든 퀸 배치 구현
2. 각 열에 퀸 하나만 배치 구현
  2.1 열 flag를 통해 구현
3. 대각선 구현
  3.1 왼쪽 대각선, 오른쪽 대각선 flag를 통해 구현
  3.2 왼: (0,0) = i+j = 0, (1,0),(0,1) = 1, .... (7,6) ,(6,7) = 13, (7,7) = 14
  3.3 오:  (1,0),(2,1)... = i-j= -1 (0,0),(2,2),(3,3)...(7,7) = i-j=0 , (1,0),(2,1),(3,2)... = i-j = 1
      이므로 i-j 에 +7 하여 구한다.
*/


#include <iostream>
using namespace::std;
int pos[8];//값이 열
int flag[8];
int flag_l[15];
int flag_r[15];
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
    if(flag[i] == 0 && flag_l[num+i] == 0 && flag_r[num-i+7] == 0){
      pos[num] = i;

      if(num == 7){
        print();
      }
      else{
        flag[i] =  flag_l[num+i] = flag_r[num-i+7] = 1;
        set(num+1);
        flag[i] =  flag_l[num+i] = flag_r[num-i+7] = 0;
      }

    }
  }

}

int main(void){
  int i;
  for(i=0;i<8;i++){
    flag[i]=0;
  }
  for(i=0;i<15;i++){
    flag_l[i]=0;
    flag_r[i]=0;
  }
  set(0);


  return 0;
}
