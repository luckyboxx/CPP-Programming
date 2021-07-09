#include <iostream>
using namespace std;

int powerxy(int x, int y);
int main(int argc, char *argv[]) {
	int x;
	int y;
	cin >> x >> y;
	cout << powerxy(x, y);

	return 0;

}

int powerxy(int x, int y) {
	int z;
	int sum = 1;
	for (z = 1; z <= y; z = z + 1) {
		sum = sum * x;
	}
	
	return sum;
}