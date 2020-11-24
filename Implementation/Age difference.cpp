#include <iostream>
using namespace std;

/*
2020 11 24 
"나이 차이"

첫 줄에 자연수 N(2<=N<=100)이 입력되고, 그 다음 줄에 N개의 나이가 입력된다.

입력 예제
10
13 15 34 23 45 65 33 11 25 42

출력 예제
54
*/

int main() {
	int N, inputN, max = -2147000000, min = 2147000000;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> inputN;
		
		if(max < inputN) max = inputN;
		else if(min > inputN) min = inputN;
	}

	cout << max - min;

	
	return 0;
}