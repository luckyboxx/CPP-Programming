#include <iostream>
#include <string>
using namespace std;

char* strcpy(char *dest, char *source);
void rev_str(char *str1, char *str2);
void rev_str(char *str1);

int main() {
	char s1[80], s2[80];

	strcpy_s(s1, "hello");
	cout << s1 << endl;

	rev_str(s1, s2);
	cout << "s1: " << s1 << ", s2: " << s2 << endl;

	rev_str(s1);
	cout << "s1: " << s1 << endl;
}

char* strcpy(char *dest, char *source) {
	char *cp = dest;
	while (*cp++ = *source++);
	return dest;
}

void rev_str(char *str1, char *str2) {
	// 길이 구하기
	int nLen = strlen(str1);

	for (int i = 0; i < nLen; i++)
	{
		str2[nLen - 1 - i] = str1[i];
	}
	
	// 모두 대입후 NULL대입
	str2[nLen] = 0;
}

void rev_str(char *str1) {
	// 길이 구하기
	int nLen = strlen(str1);

	for (int i = 0; i < nLen / 2; i++) {
		// NULL문자를 제외한 문자의 교환
		int nTemp = str1[i];
		str1[i] = str1[nLen - 1 - i];
		str1[nLen - 1 - i] = nTemp;
	}
}