/*
L	커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
D	커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
B	커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
  삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만,
  실제로 커서의 오른쪽에 있던 문자는 그대로임
P $	$라는 문자를 커서 왼쪽에 추가함
명령어가 수행되기 전에 커서는 문장의 맨 뒤에 위치하고 있다고 한다.

입력
첫째 줄에는 초기에 편집기에 입력되어 있는 문자열이 주어진다.
이 문자열은 길이가 N이고, 영어 소문자로만 이루어져 있으며,
길이는 100,000을 넘지 않는다.
둘째 줄에는 입력할 명령어의 개수를 나타내는 정수 M(1 ≤ M ≤ 500,000)이 주어진다.
셋째 줄부터 M개의 줄에 걸쳐 입력할 명령어가 순서대로 주어진다.
명령어는 위의 네 가지 중 하나의 형태로만 주어진다.

출력
첫째 줄에 모든 명령어를 수행하고 난 후 편집기에 입력되어 있는 문자열을 출력한다.

*/

#include <iostream>
#include <string.h>
#include <list>
using namespace::std;
int main(void){
  string str;
  char com ,c;
  int M, i;
  list<char> L;

  cin >> str;
  for(auto in : str){
    L.push_back(in);
  }
  auto cursor = L.end();
  cin >> M;

  for(i = 0; i < M; i++){
    cin >> com;
    if(com == 'P'){
      cin >> c;
      L.insert(cursor,c);
    }
    else if(com == 'L'){
      if(cursor != L.begin()){
        cursor--;
      }
    } else if(com == 'D'){
      if(cursor != L.end()){
        cursor++;
      }
    } else if(com == 'B'){
      if(cursor != L.begin()){
        cursor--;
        cursor = L.erase(cursor);
      }
    }
  }

  for(auto out : L){
    cout << out;
  }
  return 0;
}
