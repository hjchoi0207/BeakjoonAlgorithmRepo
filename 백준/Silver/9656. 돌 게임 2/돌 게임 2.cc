#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

	int num;
	cin >> num;
	
	if(num % 2 == 1){
		cout << "CY";
	} else {
		cout << "SK";
	}
	
}
