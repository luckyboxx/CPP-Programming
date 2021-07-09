#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	double sum = 0, num;
	int avg = 0;
	int k;
	for (k = 0; k < argc; k++) {
		num = atof(argv[k]);
		sum += num;
	}
	avg = (int)sum / (argc - 2 );

	cout << "합 = " << sum << ", 평균 = " << avg << endl;

    return 0;
}