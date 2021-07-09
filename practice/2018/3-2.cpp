#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char str[100][80];
	char token[80];
	char *p, *q;
	int t;
	int sum = 0;

	for (t = 0; t < 100; t++) {
		gets_s(str[t]); // 문자를 입력 받는다.
		p = str[t];

		while (!!*p) {
			// 문자열에서 한 번에 하나의 토큰을 읽는다.
			q = token; // q가 토큰의 시작을 가리키도록 설정한다.

			while (*p != ' ' && !!*p) {
			// 빈칸이나 널 문자를 만날 때까지 문자들을 읽는다.
				*q = *p;
				q++; p++;
			}
			if (*p == ' ') {
				// 공백이라면
				p++; // 빈칸을 건너뛰게 한다.
				*q = '\0'; // 토큰의 끝에 널 문자를 넣는다.
				sum++; // 총 토큰의 수를 계산한다.
			}		
		}
		if (!str[t][0]) // 빈 줄이면 끝난다.
			break;
	}
	cout << "총 토큰의 수: " << sum << endl;
	return 0;
}