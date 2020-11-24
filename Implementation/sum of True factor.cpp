#include <iostream>
using namespace std;

/*
2020 11 24 
"진약수의 합"

첫 줄에 자연수 N이 주어진다. (3<N<=100)
그 후, 더하는 수식과 함께 합을 출력한다.

입력 예제
20

출력 예제
1 + 2 + 4 + 5 + 10 = 22
*/

int N, sum;

int main() {
	
	cin >> N;
	cout << 1;

	for(int i = 2; i < N; i++){
		if(N % i == 0){
			sum += i;
			cout << " + " << i;
		}
	}
	cout << " = " << sum + 1;
	
	return 0;
}