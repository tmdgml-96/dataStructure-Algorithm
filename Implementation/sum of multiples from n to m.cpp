#include <iostream>
using namespace std;

/*
2020 11 23 
"1부터 N까지 M의 배수합"

자연수 N이 입력되면 1부터 N까지의 수 중 M 배수합을 출력하시오.
*/

int n, m, sum;

int main() {
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		if(i % m == 0){
			sum += i;
		}
	}
	cout << sum;
	
	return 0;
}