#include <iostream>
using namespace std;

int main() {
	int num, i;
	
	print("정수 하나를 입력하시오: ");
	cin >> num;

	for (i = 2; i < num; i++) {
		if ((num % i) == 0) {
			cout << "소수가 아닙니다." << endl;
            break;
        }
	}

	if (num == i) {
			cout << "소수 입니다." << endl;
	}

	return 0;
}