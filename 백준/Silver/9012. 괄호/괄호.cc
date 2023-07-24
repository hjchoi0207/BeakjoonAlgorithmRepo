#include <iostream>

using namespace std;

void solution(string s){
  int cnt = 0;
  

  for(int i = 0; i < s.length(); i++){
    if(s[i] == '('){
      cnt++;
    } else if(s[i] == ')'){
      cnt--;
      if(cnt < 0){
        cout << "NO" << '\n';
        return;
      }
    }
  }

  if(cnt == 0){
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  
  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int num;
  string s;

  cin >> num;

  for(int i = 0; i < num; i++){
    cin >> s;
    solution(s);
  }
}