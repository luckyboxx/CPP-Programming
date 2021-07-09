#include <iostream>
using namespace std;
int main() {
	int *p;
	int n, top;
	int sum = 0;
	cin >> n;
	p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < n; i++) {
		top = p[i];
		for (int j = 0; j < n; j++) {
			if (top > p[j])
				sum++;
		}
		cout << p[i] << "-->" << sum << "\n";
		sum = 0;
	}
    return 0;
}