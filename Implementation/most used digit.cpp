#include <iostream>
using namespace std;

int count[10];
//char arr[101];

int main() {
	
	int temp, max = -2147000000, result;
	char N[101];

	scanf("%s", N);
	
	for(int i = 0; N[i] != '\0'; i++){
		temp = N[i] - 48;
		count[temp]++;
	}
	
	for(int i = 0; i < 10; i++){
		if(max <= count[i]){
			max = count[i];
			result = i;
		}
	}
	
	cout << result;
	
	return 0;
}