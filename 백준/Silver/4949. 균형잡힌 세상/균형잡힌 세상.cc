#include <iostream>
#include <stack>

using namespace std;

/* stack문제
 * https://www.acmicpc.net/problemset?sort=ac_desc&algo=71
*/

bool isBalanced(string s) {
  stack<char> myStack;
  
  for (int i = 0; i < s.length(); i++) {
      if (s[i] == '(' || s[i] == '[') {
          myStack.push(s[i]);
      } else if (s[i] == ')' || s[i] == ']') {
          if (myStack.empty()){
            return false;
          }
        
          if (s[i] == ')') {
              if (myStack.top() != '(') return false;
              else myStack.pop();
          } else if (s[i] == ']') {
              if (myStack.top() != '[') return false;
              else myStack.pop();
          }
      }
  }

  return myStack.empty();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  
 while (true) {
        getline(cin, s);
        if (s == ".") // 입력이 "."인 경우 루프 종료
            break;

        if (isBalanced(s)) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
  
}