#include <iostream>
using namespace std;

/*
2020 11 25 
"모두의 약수"_제한시간 1s

자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수 개수를 출력하는 프로그램을 작성하세요.

만약 N으로 8이 입력되면 1(1개), 2(2개), 3(2개), 4(3개),5(2개), 6(4개), 7(2개), 8(4개)와 같이
각 숫자 약수의 개수가 구해집니다.

출력은 다음과 같이 1부터 차례대로 약수의 개수만 출력하면 됩니다.

> 첫 번째 줄에 자연수 N(5<=N<=50,000)이 주어진다.

입력 예제
8

출력 예제
1 2 2 3 2 4 2 4

*/

int count[50001], N;

int main() {
	
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		for(int j = i; j <= N; j+=i){
			count[j]++; //j는 i의 배수
		}
	}
	
	
	for(int i = 1; i <=N; i++){
		cout << count[i] << " ";
	}
	
	return 0;
}