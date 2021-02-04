/*
문제
두 영어 단어가 철자의 순서를 뒤바꾸어 같아질 수 있을 때,
그러한 두 단어를 서로 애너그램 관계에 있다고 한다.
예를 들면 occurs 라는 영어 단어와 succor 는 서로 애너그램 관계에 있는데,
occurs의 각 문자들의 순서를 잘 바꾸면 succor이 되기 때문이다.

한 편, dared와 bread는 서로 애너그램 관계에 있지 않다.
하지만 dared에서 맨 앞의 d를 제거하고, bread에서 제일 앞의 b를 제거하면,
ared와 read라는 서로 애너그램 관계에 있는 단어가 남게 된다.

두 개의 영어 단어가 주어졌을 때,
두 단어가 서로 애너그램 관계에 있도록 만들기 위해서 제거해야 하는 최소 개수의 문자 수를 구하는 프로그램을 작성하시오.
문자를 제거할 때에는 아무 위치에 있는 문자든지 제거할 수 있다.

입력
첫째 줄과 둘째 줄에 영어 단어가 소문자로 주어진다.
각각의 길이는 1,000자를 넘지 않으며, 적어도 한 글자로 이루어진 단어가 주어진다.

출력
첫째 줄에 답을 출력한다.

풀이
  1. 각 단어의 알파벳을 배열로 카운트
    1.1 향상된 for문 사용
  2. 각 단어 개수의 차의 절대값들의 합
    2.1 하나의 배열에 앞 문자는 +, 뒤 문자는 -로 0이 아닌 수들의 절대값을 합.
    2.2 0은 더해도 상관 없으니 그냥 전부 더하면 된다.
*/

#include <iostream>
#include <string.h>
using namespace::std;
int main(void){
  string str1,str2;
  int alpha[26] = {0};
  int result = 0;

  cin >> str1 >> str2;
  for(char c : str1)
    alpha[c-'a']++;
  for(char c : str2)
      alpha[c-'a']--;

  for(int i=0; i < 26; i++)
      result += abs(alpha[i]);

  cout << result;
  return 0;
}
