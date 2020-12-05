#include <stdio.h>
using namespace std;

int digit_sum(int x){
	int temp, sum = 0;
	
	while(x > 0){
		temp = x % 10;
		sum += temp;
		x = x/10;
	}
	return sum;
}

int main() {
	int N = 0, count = 0, sum;
	int max = -2147000000;
	int result;
	
	scanf("%d", &count);
	
	while(count > 0){
		
		scanf("%d", &N);
		sum = digit_sum(N);
		
		if(max < sum){
			max = sum;
			result = N;
		}else if(sum == max){
			if(N > result){
				result = N;
			}
		}
		--count;
	}
	
	printf("%d", result);

	return 0;
}