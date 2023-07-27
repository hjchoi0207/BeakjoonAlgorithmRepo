#include <iostream>
#include <queue>

using namespace std;

int solution(int cardNum) {
  queue<int> q;
  int lastCardNum, tmp;
  
  for(int i = 1; i <= cardNum; i++){
    q.push(i);
  }

  lastCardNum = q.front();
  
  while(true){
    if(q.size() == 1){
      return q.front();
    }
      
     q.pop();  //버리고

    //제일 뒤로 보내기
    tmp = q.front();
    q.pop();
    q.push(tmp);

    lastCardNum = q.front();
    
  }

  return lastCardNum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int cardNum;

  cin >> cardNum;

  cout << solution(cardNum);
  
}