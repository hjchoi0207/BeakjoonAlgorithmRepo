#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long card, turn, c1, c2, idx1, idx2;
  long arrCard[1001];
  
  cin >> card >> turn;
  
  for(long i = 0; i < card; i++){
  	cin >> arrCard[i];	
  }
  
  for(long i = 0; i < turn; i++){
	sort(arrCard, arrCard + card);
	c1 = arrCard[0];
	c2 = arrCard[1];
	
	arrCard[0] = c1 + c2;
	arrCard[1] = c1 + c2;
  }
  
  long sum = 0;
  for(long i = 0; i < card; i++){
  	sum += arrCard[i];
  }
  
  cout << sum;
   
}