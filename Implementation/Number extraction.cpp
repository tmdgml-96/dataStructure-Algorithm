#include <iostream>
using namespace std;

/*
2020-11-29
숫자만 추출
*/

char getNum[50];
int checkNum, cnt, resultNum, i;

int main() {
	
	while(!cin.eof()){
		cin >> getNum[i];
		
		checkNum = getNum[i] - 48;
		if(checkNum >= 0 && checkNum < 10){
			resultNum = resultNum * 10 + checkNum;
		}
		i++;
	}
	cout << resultNum << endl;
	
	for(int i = 1; i <= resultNum; i++){
		if(resultNum % i == 0){
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}