#include <iostream>
using namespace std;

/*
2020 11 23 
"자연수의 합"

자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하시오.

입력 예제
3  7

출력 예제
3+ 4+ 5+ 6+ 7 = 25
*/

int a, b, sum;

int main() {
	
	cin >> a >> b;
	
	for(int i = a; i <= b; i++){
		cout << a << "+ ";
		sum += a;
	}
	cout << " = " << sum;
	
	return 0;
}