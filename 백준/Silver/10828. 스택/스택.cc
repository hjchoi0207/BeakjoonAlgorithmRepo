#include <iostream>

using namespace std;

int mystack[10000];
int top = 0;

void solution(string command){
  if(command == "push"){
    cin >> mystack[top];
    top++;
  } else if(command == "pop"){
    if(top == 0){
      cout << -1 << "\n";
    } else {
      cout << mystack[top -1] << "\n";
      top--;
    }
  } else if(command == "size"){
    cout << top << "\n";
  } else if(command == "empty"){
    if(top == 0){
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  } else if(command == "top"){
    if(top == 0){
      cout << -1 << "\n";
    } else {
      cout << mystack[top -1] << "\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int num;
  string command;

  cin >> num;

  for(int i = 0; i < num; i++){
    cin >> command;
    solution(command);
  }
  
  
}