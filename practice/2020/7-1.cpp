#include <iostream>
#include <string>
using namespace std;

class mystring {
private:
    char str[80];
public:
    mystring(const char *s);
    int strlength();
    int numchar(char ch);
};

mystring::mystring(const char *s) {
    strcpy_s(str, s);
}

int mystring::strlength() {
    int len = 0;
    while (str[len] != NULL) {
        len++;
    }
    return len;
}

int mystring::numchar(char ch) {
    int len = 0, cnt = 0;
    while (str < sizeof(str)) {
        if (str[len] == ch)
            cnt++;
        len++;
    }
    return cnt;
}

int main() {
        mystring my("I am studing C++ language.:");
        cout << "문자열 길이 : " << my.strlength() << endl;
        cout << "문자 a의 개수 : " << my.numchar('a') << endl;

        return 0;
    }