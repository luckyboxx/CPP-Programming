#include <iostream>
using namespace std;

int main() {
	int num1, num2, i;
	int sum1 = 0, sum2 = 0;

	print("두 정수를 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);

	for (i = 1; i <= num1; i++) {
		if ((num1 % i) == 0)
			sum1++;
	}

	for (i = 1; i <= num2; i++) {
		if ((num2 % i) == 0)
			sum2++;
	}
	printf("\n약수들의 갯수: %d %d\n", sum1, sum2);

	return 0;
}