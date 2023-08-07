#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

	int num, idx,len, cnt = 0;
	
	vector<int> v(1001); //0으로 자동 초기화  
	
	cin >> num >> len;
	
	for(int i = 1; i <= num; i++){
		cin >> idx;
		v[idx] = 1;
	}
	
	for(int i = 1; i <= 1000;){
		if(v[i] > 0){
			for(int j = 0; j < len; j++){
				i++;
			}
			cnt++;
		} else {
			i++;
		}
	}
	
	
	cout << cnt;
	
}
