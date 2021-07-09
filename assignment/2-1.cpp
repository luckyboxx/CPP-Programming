#include <iostream>
#define MAX 3
using namespace std;

float avg(float* arr, int size);

int main() {
	float num[MAX] = {};
	int t;
	cout <<"부동 소수 값을 입력하시오.: ";

	for (t = 0; t < MAX; ++t) {
		num[t] = t;
		cin >> num[t];
	}
	cout << "부동소수 값들의 평균: " << avg(num, MAX) << endl;

	return 0;
}

float avg(float* arr, int size) {
	float sum = 0;

	// 전달된것이 없거나 음수이면 0리턴
	if (size <= 0) {
		return sum;
	}

	// 모두 합치기
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	// 평균 구해서 리턴하기
	return sum / size;
}