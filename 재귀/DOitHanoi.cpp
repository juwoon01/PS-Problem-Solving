/*Do it 하노이의 탑*/
/*
1. 가장 밑의 원반을 제외한 그룹을 중간 기둥으로 이동시킨다.
  1.1 원반 그룹이 1개가 될때까지 재귀한다.
  1.2 재귀를 하면 현재 그룹의 목표 기둥은 이전 그룹의 중간 기둥이다.
2. 가장 밑의 원반을 목표 기둥으로 이동시킨다.
3. 중간 기둥의 그룹을 목표 기둥으로 이동시킨다.
  3.1 원반 그룹이 1개가 될때까지 재귀한다.
  3.2 재귀를 하면 현재 그룹의 목표 기둥은 이전 그룹의 중간 기둥이다.
*/
#include <iostream>
using namespace::std;
void move(int n, int start, int target){
  if(n > 1){
    move(n-1, start, 6-start-target);//중간 기둥은 전체 - 시작 - 목표
  }
  cout << n << " from " << start << " to " << target << endl;
  if(n > 1){
    move(n-1, 6-start-target, target);
  }
}


int main(void){
  int n;
  cout << "num: ";
  cin >> n;
  move(n,1,3);

  return 0;
}
