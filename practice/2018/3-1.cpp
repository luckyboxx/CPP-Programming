#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t, i;
	int brank = 0, dot = 0, comma = 0, sum = 0;
	char text[100][80];
	
	for (t = 0; t < 100; t++) {
		gets_s(text[t]); // 문자를 입력 받는다.
		if (!text[t][0]) // 빈 줄이면 끝난다.
			break;
		for(i = 0; i < 80; i++)	{
			switch (text[t][i])	{
			case ' ': brank++;
				break;
			case '.': dot++;
				break;
			case ',': comma++;
				break;
			}
		}
		sum = brank + dot + comma;

	}

	cout << "정답: " << sum << endl;
	return 0;
}