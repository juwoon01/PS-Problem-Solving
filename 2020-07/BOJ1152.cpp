#include <iostream>
#include <cstring>

using namespace::std;

int main(void){
  string input;
  int count=0;
  char buff[1000000];
  getline(cin,input);
  strcpy(buff,input.c_str());
  char *token = strtok(buff," ");


  while(token != NULL){
    count++;
    token = strtok(NULL," ");
  }

  cout << count;
  return 0;
}
