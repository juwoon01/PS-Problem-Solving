/*https://www.acmicpc.net/problem/1931*/
/*
 회의실 배정
한 개의 회의실이 있는데 이를 사용하고자 하는 N개의 회의에 대하여 회의실 사용표를 만들려고 한다.
각 회의 I에 대해 시작시간과 끝나는 시간이 주어져 있고, 각 회의가 겹치지 않게 하면서 회의실을 사용할 수 있는 회의의 최대 개수를 찾아보자. 단, 회의는 한번 시작하면 중간에 중단될 수 없으며 한 회의가 끝나는 것과 동시에 다음 회의가 시작될 수 있다. 회의의 시작시간과 끝나는 시간이 같을 수도 있다. 이 경우에는 시작하자마자 끝나는 것으로 생각하면 된다.

첫째 줄에 회의의 수 N(1 ≤ N ≤ 100,000)이 주어진다.
둘째 줄부터 N+1 줄까지 각 회의의 정보가 주어지는데 이것은 공백을 사이에 두고 회의의 시작시간과 끝나는 시간이 주어진다. 시작 시간과 끝나는 시간은 231-1보다 작거나 같은 자연수 또는 0이다.

첫째 줄에 최대 사용할 수 있는 회의의 최대 개수를 출력한다.

풀이
  1. 오름차순 정렬
  2. 1 ~ 3 / 2 ~ 12 / 3 ~ 4 / 5 ~ 7 / 5 ~ 8 /6 ~ 7
   2.1 시작 시간이 전 회의의 끝나는 시간보다 크면 카운트 한다.
       회의가 끝나는 시간이 이전 회의의 끝나는 시간보다 작으면 끝나는 시간을 변경하고 카운트는 하지 않는다.
       (전 회의가 아닌 이번 회의를 선택했다는 의미)

*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace::std;

int main(void){
  int N;
  vector<pair<int, int>> v;
  cin >> N;

  for(int i = 0; i < N; i++){
    int start, end;
    cin >> start >> end;
    v.push_back(make_pair(start, end));
  }
  sort(v.begin(),v.end());
/*
  for(int i = 0; i < N; i++){
    cout << v[i].first <<" "<< v[i].second << endl;
  }
*/
  int count = 1;
  int nowEndTime = v[0].second;

  for(int i = 1; i < N; i++){
    if(v[i].second < nowEndTime){
      nowEndTime = v[i].second;
    }
    else if(v[i].first >= nowEndTime){
      count++;
      nowEndTime = v[i].second;
    }
  }

  cout << count;
}
