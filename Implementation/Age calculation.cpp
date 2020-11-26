#include <iostream>
using namespace std;

/*
2020 11 26 
"나이 계산"

주민등록증 번호가 주어지면 나이와 성별을 판단해 출력하는 프로그램을 작성하세요.
번호는 -를 기준으로 앞자리와 뒷자리로 구분합니다.

뒷자리의 첫 번째 수가 1이면 1900년대생 남자이고, 2이면 1900년대생 여자
3이면 2000년대생 남자, 4이면 2000년대생 여자입니다.
올해는 2019년입니다.

> 첫 줄에 주민등록증 번호가 입력됩니다.
> 첫 줄에 나이와 성별을 공백으로 구분해 출력하세요.
  성별은 남자는 M, 여자는 W

입력 예제
780316-2376152

출력 예제
42 W
*/

char number[15];

int main() {
	int nowYear = 2019;
	
	for(int i = 0; i < 15; i++){
		cin >> number[i];
	}
	
	if(number[7] == '1' || number[7] == '2'){
		cout << nowYear - (1900 + ((number[0]-48) * 10) + number[1]-48) + 1;
	}else{
		cout << nowYear - (2000 + ((number[0]-48) * 10) + number[1]-48) + 1;
	}
	
	if(number[7] == '1' || number[7] == '3'){
		cout << " M";
	}else{
		cout << " W";
	}

	return 0;
}