#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int num, day;
  cin >> num;

  for(int i = 0; i < num; i++){
    cin >> day;
      
    long long result = 0; // 부호있는 64bit 정수형을 위해 사용
    int maxPrice = 0;
    vector<int> v(day);
      
    for(int j = 0; j < day; j++){
      cin >> v[j];
    }
      
    for(int j = day - 1; j >= 0; j--){
      if(maxPrice < v[j]){
        maxPrice = v[j];
      }
      result += (maxPrice - v[j]);
    }

    cout << result << '\n';
  }
}
