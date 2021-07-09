#include <iostream>
#include <cstring>
using namespace std;

template <class Type> class Dymax {
private:
	Type * arr;
	int size;
public:
	Dymax(int n);
	void input();
	Type max();
};

template <class Type> Dymax<Type>::Dymax(int n) {
	size = n;
	arr = new Type(size);
}
template <class Type> Dymax<Type>::void input() {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

template <class Type> Dymax<Type>::Type max() {
	Type mval;
	mval = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] > mval)	mval = arr[i];
	}
	return mval;
}

int main() {
	int n;
	cout << "정수의 갯수를 입력: ";
	cin >> n;

	Dymax<int> intclass(n);
	cout << n << "개의 정수 입력: ";

	intclass.input();
	cout << "최대값 = " << intclass.max() << endl;
	cout << endl;

	cout << "실수의 갯수: ";
	cin >> n;

	Dymax<double> dclass(n);
	cout << n << "개의 실수 입력: ";

	dclass.input();
	cout << "최대값 = " << dclass.max() << endl;

	return 0;
}