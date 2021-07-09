#include <iostream>
using namespace std;

class queue {
    int *q, size, sloc, rloc;

public:
    queue(int n);
    ~queue();
    int tmp = 0;
    void qput(int i);
    int qget();
    int max();
    void reverse_print(int num);
};

queue::queue(int n) {
    sloc = rloc = -1;
    size = n;
    q = new int[size];
}

queue::~queue() {}

void queue::qput(int i) {
    if (sloc == (size - 1)) {
        return;
    }
    sloc++;
    q[sloc] = i;
}

int queue::qget() {
    if (rloc == sloc) {
        return 0;
    }
    rloc++;
    return q[rloc];
}

int queue::max() {
    q[rloc] = NULL;
    tmp = q[0];
    for (int i = 0; i <= sloc; i++) {
        if (tmp < q[i])
            tmp = q[i];
    }
    return tmp;
}

void queue::reverse_print(int num) {
    for (int i = num; i > 0; i--) {
        cout << q[sloc] << " ";
        sloc--;
    }
}

int main() {
    queue a(20);
    a.qput(50);
    a.qput(15);
    a.qput(10);
    a.qput(30);
    a.qput(80);
    a.qput(35);

    cout << "(1) Max_Value" << endl;
    cout << a.max() << endl;
    cout << endl;

    cout << "(2) Reverse_Value" << endl;
    a.reverse_print(4);
    cout << endl;

    return 0;
}