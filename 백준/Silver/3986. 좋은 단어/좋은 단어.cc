#include <iostream>
#include <stack>

using namespace std;

bool solution(string s) {
  stack<char> st;

  for(char ch : s){
    if(st.empty() || st.top() != ch){
      st.push(ch);
    } else {
      st.pop();
    }
  }
  return st.empty();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int num;
  int res = 0;
  string s;
  
  cin >> num;
  for(int i = 0; i < num; i++){
    cin >> s;
    if(solution(s)){
      res++;
    } 
  }
  cout << res;
}