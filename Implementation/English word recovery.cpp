#include <stdio.h>
using namespace std;

char alpha[101], resultAlpha[101];

int main() {
	int i = 0, cnt = 0;
	
	gets(alpha);
	for(i = 0; alpha[i] != '\0'; i++){
		if(alpha[i] != ' '){
			if(alpha[i] > 64 && alpha[i] < 91){
				//resultAlpha[cnt++] = 97 + (alpha[i] - 65);
				printf("%c", 97 + (alpha[i] - 65));
			}else{
				//resultAlpha[cnt++] = alpha[i];
				printf("%c", alpha[i]);
			}
		}
	}
	//resultAlpha[cnt] = '\0'; // 마지막 지점에 문자열 마지막 알리기 
	
	//printf("%s", resultAlpha);

	return 0;
}