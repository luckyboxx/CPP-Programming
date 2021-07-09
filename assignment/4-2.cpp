#include <iostream>
using namespace std;

template <class Type> Type min(Type minVal, Type val) {
	if (val > minVal)
		return minVal;
	else
		return val;
}

int main()
{
	cout << "min(3, 4): " << min(3, 4) << endl;
	cout << "min('c', 'a'): " << min('c', 'a') << endl;

	return 0;
}