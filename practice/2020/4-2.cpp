#include <iostream>
using namespace std;

int find_substr(char *sub, char *str);

int main() {
	int index;
	char sub[4] = "aba";
	char str[18] = "aabababacabaabca";
	cout << "문자열 = " << "\"" << str << "\"" << endl;
	cout << "패턴 = " << "\"" << sub << "\"" << endl << endl;
	index = find_substr(sub,str);
	cout << "갯수: " << index << endl;
	return 0;
}

int find_substr(char *sub, char *str) {
	int i;
	char *p, *q;
	int sum = 0;
	for (i = 0; str[i] != NULL; i++) {
		p = sub;
		q = &str[i];
		while (*p == *q) {
			p++;
			q++;
			if (*p == NULL) {
				sum++;
			}
		}
	}
	return sum;
}