#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int num, count = 0;
  int arr[101];
  
  cin >> num;

  for(int i = 0; i < num; i++){
    cin >> arr[i];
  }
  
  for(int i = num - 1; i > 0; i--){
  	while(arr[i] <= arr[i - 1]){
  		arr[i - 1]--;
  		count++;
	}
  }  
  cout << count;
}