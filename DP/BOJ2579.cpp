/*https://www.acmicpc.net/problem/1932*/
/*
동적계획법
  같이 각각의 계단에는 일정한 점수가 쓰여 있는데 계단을 밟으면 그 계단에 쓰여 있는 점수를 얻게 된다.
  계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다.
  즉, 한 계단을 밟으면서 이어서 다음 계단이나, 다음 다음 계단으로 오를 수 있다.
  연속된 세 개의 계단을 모두 밟아서는 안 된다. 단, 시작점은 계단에 포함되지 않는다.
  마지막 도착 계단은 반드시 밟아야 한다.
  첫째 줄에 계단 오르기 게임에서 얻을 수 있는 총 점수의 최댓값을 출력한다.

풀이
  1. count를 통해 1일때 건너뛰기, 2일때 건너뛰기 재귀
  1.1 마지막을 밟지 못하면 제외, 최대값을 구함
*/

#include <iostream>
using namespace::std;

int score[300];
int MAX = -1;
int n;

void recu(int count, int index,int sum){
  if(index == n){
    if(sum > MAX){
      MAX = sum;
    }
    return;
  }
  else if(index > n){
    return;
  }

  sum += score[index];
  //다음칸으로 가거나 넘어가거나 무조건 넘어가거나
  if(count == 2){//무조건 넘어가
    count = 0;
    recu(count,index+2,sum);
  }
  else{
    recu(count+1,index+1,sum);//다음칸으로
    count = 0;
    recu(count,index+2,sum);//다음칸으로
  }




}

int main(void){

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> score[i];
  }

  recu(0,0,0);

  cout << MAX;
  return 0;
}
