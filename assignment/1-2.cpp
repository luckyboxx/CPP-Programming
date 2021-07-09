#include <iostream>
using namespace std;

int main() {
	int pri; //변수 pri를 정수형으로 선언
	int num; //변수 num을 정수형으로 선언

	for (pri = 1000; pri <= 2000; pri++) { //1000부터 2000까지 pri값을 1씩 증가
		for (num = 2; num <= pri; num++) { //2부터 pri값까지 num값을 1씩 증가
			if ((pri % num) == 0) //pri값이 나누어떨어지면
				break; //종료한다
		}
	if (pri == num) //pri값과 num값이 같다면
		cout << pri << "\t"; //pri값 출력
	}

	return 0;
}