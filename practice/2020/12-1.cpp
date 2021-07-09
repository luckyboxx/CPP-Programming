#include <iostream>
#include <cstring>
using namespace std;

class B_class {
private:
public:
	char author[80];
	void put_author(const char *s) { strcpy_s(author, s); }
	void show_author() { cout << author << endl; }
};

class D_class : public B_class {
private:
	char title[80];
public:
	void put_title(const char *num) { strcpy_s(title, num); }
	void show_title() { cout << author << endl << title << endl; }
};

int main() {
	B_class *p;
	B_class B_ob;

	D_class *dp;
	D_class D_ob;

	p = &B_ob;
	p -> put_author("Tom Clancy");

	p = &D_ob;
	p -> put_author("William Shakespeare");

	B_ob.show_author();
	cout << endl;

	dp = &D_ob;
	dp -> put_title("The Tempest");
	D_ob.show_author();

	return 0;
}