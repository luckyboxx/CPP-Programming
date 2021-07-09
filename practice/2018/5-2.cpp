#include <iostream>
using namespace std;

void strrevattach(char *to, const char *from);
int main() {
	char tstr[80] = "hi";
	char fstr[80] = "hello";
	strrevattach(tstr, fstr);
	cout << tstr;
    return 0;
}

void strrevattach(char *to, const char *from) {
	int fsum = 0;
	int tsum = 0;
	int k, m;
	while (*from != NULL) {
		fsum++;
		from++;
	}
	while (*to != NULL) {
		tsum++;
		to++;
	}
	
	for (int i = 0; i < fsum+1; i++) {
		if (i == 0)
			*to = ' ';
		else{
			*to = *(from-1);
			from--;
		}
		to++;
	}
}
