#include <iostream>
using namespace std;

int num, temp, count;

int main() {
	
	cin >> num;
	
	for(int i = 1; i <= num; i++){
		temp = i;
		
		while(temp > 0){
			temp = temp / 10;
			count++;
		}
	}
	
	cout << count;
	
	return 0;
}