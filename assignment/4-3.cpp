#include <iostream>
using namespace std;

template <class Type> int find(Type object, Type *list, int size) {
	Type temp = NULL;
	for (int i = 0; i < size; i++) {
		if (object == list[i])
			temp = i;
	}
	if (temp != NULL)
		return temp;
	else
		return -1;
}

int main() {
	int size, *p, i_obj;
	float *q, f_obj;
	char *r, c_obj;

	// int형
	cout << "배열의 크기를 입력: ";
	cin >> size;
	cout << size << "개의 배열을 입력(int)" << endl;

	p = new int; // 동적할당
	*p = size;

	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
	cout << "찾을 값 입력: ";
	cin >> i_obj;

	if (find(i_obj, p, size) != -1) {
		cout << i_obj << "는 배열의" << find(i_obj, p, size) << "번 째입니다." << endl << endl;
	}
	else
		cout << find(i_obj, p, size) << endl << endl;

	// float형
	cout << "배열의 크기를 입력: ";
	cin >> size;
	cout << size << "개의 배열을 입력(float)" << endl;

	q = new float; //동적할당
	*q = size;

	for (int i = 0; i < size; i++) {
		cin >> q[i];
	}
	cout << "찾을 값 입력: ";
	cin >> f_obj;

	if (find(f_obj, q, size) != -1) {
		cout << f_obj << "는 배열의" << find(f_obj, q, size) << "번 째입니다." << endl << endl;
	}
	else
		cout << find(f_obj, q, size) << endl << endl;

	// char형
		cout << "배열의 크기를 입력: ";
	cin >> size;
	cout << size << "개의 배열을 입력(char)" << endl;

	r = new char; //동적할당
	*r = size;

	for (int i = 0; i < size; i++) {
		cin >> r[i];
	}

	cout << "찾을 값 입력: ";
	cin >> c_obj;

	if (find(c_obj, r, size) != -1) {
		cout << c_obj << "는 배열의" << find(c_obj, r, size) << "번 째입니다." << endl << endl;
	}
	else
		cout << find(c_obj, r, size) << endl << endl;

	return 0;
}