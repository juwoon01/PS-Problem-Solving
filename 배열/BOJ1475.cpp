/*
문제
다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.
다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다.
한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다.
다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최솟값을 출력하시오.
(6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)

입력
첫째 줄에 다솜이의 방 번호 N이 주어진다.
N은 1,000,000보다 작거나 같은 자연수 또는 0이다.

출력
첫째 줄에 필요한 세트의 개수를 출력한다.
*/

#include <iostream>
using namespace::std;
int main(void){
  int N;
  int num[10] = {0};
  int result;
  cin >> N;

  if(N == 0){
    cout << 1;
    return 0;
  }
  while(N > 0){
    num[N%10]++;
    N /= 10;
  }

  num[6] = (num[6]+num[9])%2 == 0 ? (num[6]+num[9])/2 : (num[6]+num[9])/2 + 1;
  result = num[0];
  for(int i=1;i<9;i++){
    if(num[i] > result){
      result = num[i];
    }
  }

  cout << result;

  return 0;
}
