#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;


bool compareArrays(const array<int, 3>& a, const array<int, 3>& b) {
    return a[2] > b[2]; // 내림차순 정렬
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num, countryCode, studentCode, score;
    int printCount = 1, countryCode1 = 0, countryCode2 = 0;
    vector<array<int, 3>> vectorOfArrays;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> countryCode >> studentCode >> score;
        array<int, 3> arr = {countryCode, studentCode, score};
        
        vectorOfArrays.push_back(arr);
    }
    
    sort(vectorOfArrays.begin(), vectorOfArrays.end(), compareArrays);
    
    for (const array<int, 3>& arr : vectorOfArrays) {

    	if(printCount >= 2 && countryCode1 == countryCode2 && countryCode1 == arr[0]){
    		continue;
		} else {
			cout << arr[0] << " " << arr[1] << endl;
			
			//국가코드 구분 
			if(printCount == 1){
	    		countryCode1 = arr[0];
			} else if(printCount == 2){
				countryCode2 = arr[0];
			}
			
			printCount++;
		
		}

		if(printCount == 4){
			break;
		}
    }

    
    return 0;
}
