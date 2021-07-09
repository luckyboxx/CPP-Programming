#include <iostream>
#include <conio.h>	// _kbhit()함수와 _getch()함수를 포함하고 있는 헤더파일
#define ENTER 0x0d	// ENTER값을 0x0d로 지정 (이때, 0x0d는 숫자 13의 ASCII 코드이다.)
using namespace std;

int main(int argv, char *argv[]) {
	int letter = 0;	// letter를 정수형으로 선언한 뒤 0으로 초기화
	int num = 0;	// num을 정수형으로 선언한 뒤 0으로 초기화
	int mark = 0;	// mark를 정수형으로 선언한 뒤 0으로 초기화

	for(char c=0;;) {	//c를 문자형으로 선언한 후, 0으로 초기화시킨 후
		//아래 조건들의 모든 작업이 마무리될 때까지 무한 반복
		if (_kbhit()) {	//키보드의 키값을 입력 받았다면
			c = _getch();	//입력된 키값을 저장한다.
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {	//영문자 조건
				letter++; //영문자의 개수가 1씩 증가한다.
			}
			else if (c >= 0x30 && c <= 0x39) { //숫자 조건
				num++; //숫자의 개수가 1씩 증가한다.
			}
			else if (c == ',' || c == '.' || c == '!') { //구두점 조건
				mark++; //구두점의 개수가 1씩 증가한다.
			}
			else if (c == ENTER) //<ENTER>키를 누르면
				break; //종료한다
		}
	}

	cout << "영문자의 개수 : " << letter << endl; //영문자 개수를 출력한다.
	cout << "숫자의 개수 : " << num << endl; //숫자의 개수를 출력한다.
	cout << "구두점의 개수 : " << mark << endl; //구두점의 개수를 출력한다.

	return 0;
}