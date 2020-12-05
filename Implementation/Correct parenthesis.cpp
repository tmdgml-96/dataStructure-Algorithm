#include <stdio.h>
using namespace std;

char yesorno[31];

int main() {
	int i = 0, cnt = 0;
	
	scanf("%s", &yesorno);

	for(i = 0; yesorno[i] != '\0'; i++){
		
		if(yesorno[i] == '('){
			cnt++;
		}else if(yesorno[i] == ')'){
			cnt--;
		}
		
		if(cnt < 0) break; // 꼭 예외까지 명시해주기 
	}
	
	if(cnt == 0){
		printf("YES");
	}else{
		printf("NO");	
	}

	return 0;
}