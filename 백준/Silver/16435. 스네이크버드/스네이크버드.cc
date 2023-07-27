#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int fruit, snakeBird;
  int arrFruit[1000];

  cin >> fruit >> snakeBird;

  for(int i = 0; i < fruit; i++){
    cin >> arrFruit[i];
  }

  sort(arrFruit, arrFruit + fruit);

  for(int i = 0; i < fruit; i++){
    if(arrFruit[i] <= snakeBird){
      snakeBird++;
    } 
  }
  cout << snakeBird;

}