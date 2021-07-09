#include <iostream>
using namespace std;

// 큐 클래스 선언
class queue {
	int q[100];
	int sloc, rloc;

// 큐의 멤버함수(메서드) 선언
public:
	queue();
	~queue();
	void qput(int i);
	int qget();
	void reverse_print(int num);
	int max();
};

queue::queue() { sloc = rloc = -1; }
queue::~queue() {}

// 큐값 삽입
void queue::qput(int i) {
	if (sloc == 99) {
		cout << "Queue is full." << endl;
		return;
	}
	sloc++;
	q[sloc] = i;
}
// 큐값 삭제
int queue::qget() {
	if (rloc == sloc) {
		cout << "Queue underflow." << endl;
		return 0;
	}
	rloc++;
	return q[rloc];
}

// 가장 큰 값을 반환하는 멤버함수
int queue::max() {
	int max = q[sloc + 1];
	for (int i = 1; i <= (sloc + 1); i++) {
		if (q[i] > max) {
			max = q[i];
		}
	}
	return max;
}

// 매개변수의 수만큼 역순으로 출력하는 멤버함수
void queue::reverse_print(int num) {
	for (int i = sloc; num != 0; i--) {
		cout << q[i] << " ";
		num--;
	}		
}

int main() {
	queue a;
	a.qput(50);
	a.qput(15);
	a.qput(40);
	a.qput(30);
	cout << a.qget() << " "; // 50 출력
	cout << a.max() << " "; // 15 40 30 중 가장 큰 40 출력
	a.reverse_print(2); // 15 40 30 중 가장 맨 뒤 숫자 2개만 반전 되어 30 40 출력
	cout << endl;
	
	return 0;
}