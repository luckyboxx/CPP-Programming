# 2018년 1학기 객체지향프로그래밍 실습

## 1주차

1. 두 개의 정수 num1, num2 값을 입력받아,  num1, num2의 모든 약수들의 개수를 출력하는 프로그램을 작성하시오.

    > 두 정수를 입력하시오: 101 24  
    > 약수들의 갯수: 2 8

2. 두 정수를 매개변수로 받아 앞의 정수에 대한 뒤의 정수 승을 구하여 반환하는 powerxy 함수를 작성하고 main 함수에서 이 함수를 호출하는 프로그램을 작성하여라.(예를 들어, powerxy(2, 4)가 호출되면, 2의 4제곱을 반환한다.)

    > 3    5 → 243

## 2주차

1. 1에서 10까지의 수들을 아래와 같이 출력하는 프로그램을 작성하여라. 이 때 수들 사이를 탭 간격만큼 띄우라.

    > 1  
    > 1 2  
    > 1 2 3  
    > .  
    > .  
    > .  
    > 1 2 3 4 5 6 7 8 9 10

2. 6개의 정수를 일차원 배열에 입력받아 가장 작은 수를 찾아 0번째 위치에 재배치하는 프로그램을 작성하시오.

    > (예_1)  
    > 입력 : 50 40 20 10 60 30  
    > 출력 : 10 40 20 50 60 30  
    >  
    > (예_2)  
    > 입력 : 30 20 70 40 50 10  
    > 출력 : 10 20 70 40 50 30

## 3주차

1. 빈 라인이 입력될 때까지 문장들을 입력받아 문자열에 있는 공백, 콤마, 마침표의 수를 세는 프로그램을 작성하여라. 공백, 콤마, 마침표를 구분하기 위해 switch문을 사용하여라.

    > This is a test.  
    > Hello!  
    > A,B,C are alphabet.  
    >  
    > 정답: 9

2. 빈 라인이 입력될 때까지 문장들을 입력받아 토큰의 수를 계산하는 프로그램을 작성하라. (강의노트의 토큰 구분 프로그램을 참고할 것)

    > This is a test  
    > Hello  
    > I am hungry  
    >  
    > 총 토큰의 수는 8이다.

## 4주차

1. 명령어-라인에서 여러 개의 수를 입력받아 합과 평균을 출력하는 함수를 작성하라.

    > test.ext 10 30 90 80 34 26  
    > 합 = ○○○, 평균 = ○○

2. 7.4절의 예제 문제(find_substr 함수)를 참고하여 문자열에서 일치하는 부분문자열의 수를 출력하라.

    > 문자열 = "aabababacabaabca"  
    > 패턴 = "ab"  
    >  
    > 정답: 5

## 5주차

1. 하나의 수(정수)를 입력받아 그 수의 크기만큼 배열을 동적으로 생성한다. 이 후, 그 수만큼의 정수를 입력받아 배열에 저장한다. 마지막으로 배열의 각 원소에 대해 자신보다 작은 두 수들의 개수를 계산하여 출력한다.

    > 배열의 크기: 5  
    > 5개의 수를 입력: 30 20 10 50 40  
    > 출력:  
    > 30 --> 2  
    > 20 --> 1  
    > 10 --> 0  
    > 50 --> 4  
    > 40 --> 3

2. 문자열을 역전시켜 다른 문자열에 붙이는 기능을 갖는 strrevattach() 함수를 작성하여라. 이 함수의 원형은 다음과 같다.

    ```C++
    void strrevattach(char *to, const char *from);
    ```

    * from의 문자열을 역전 복사하여 to의 문자열의 뒤에 붙여 저장한다. strrevattach()를 사용하는 프로그램을 작성하여라.

        > to -> "Hi"  
        > from -> "hello"  
        > to -> "Hi olleh"

## 6주차

1. 세 개의 double 부동 소수를 매개변수로 받는 생성자를 사용하는 box라는 클래스를 작성하여라. 매개변수로 전달된 세 개의 실수는 상자의 각 모서리의 길이를 나타낸다. box 클래스에서 이 상자의 부피를 구한 후에 double형 변수에 부피를 저장하도록 하라. box 객체의 부피를 출력하는 vol()이라는 멤버 함수를 포함하여라. 그리고 이 클래스의 객체를 생성하여 실행해보라.

    > 10  
    > 20  
    > 30  
    > 6000

2. 다음과 같은 두 개의 멤버함수를 추가하고 이를 실행해보라.
    > 50 40 30 40
    1. 큐 클래스의 큐에 들어 있는 원소들 중에 가장 큰 값을 반환하는 멤버함수를 작성하라.

        ```C++
        int queue::max()
        ```

    2. 큐 클래스의 큐에 들어 있는 원소들을 매개변수의 수만큼 역순으로 출력하는 멤버함수를 작성하라.

        ```C++
        void queue::reverse_print(int num)
        ```

## 8주차

1. 하나의 좌표를 나타내는 point 클래스를 정의하라. 생성자 함수는 x와 y의 초기값을 매개변수로 받아들인다. 각 좌표값에 대해 원점까지의 거리를 계산하여 반환하는 origin_distance 멤버함수를 작성하라.

    > p1의 원점거리 = 5  
    > p2의 원점거리 = 5.0902

    ```C++
    class point {
    private:
        int x, y;
    public:
        // 멤버함수들
    };
    ```

2. 하나의 좌표를 나타내는 point 클래스를 정의하라. 생성자 함수는 x와 y의 초기값을 매개변수로 받아들인다. (*앞의 문제 1과 같은 클래스*)
    1. 하나의 point 클래스 객체를 매개변수로 받아 두 좌표사이의 거리를 계산하여 반환하는 two_distance 멤버함수를 추가하라.

        ```C++
        float point::two_distance(point a);
        ```

    2. 두 개의 point 클래스 객체를 매개변수로 받아들여 두 좌표사이의 거리를 반환하는 distance2 함수를 독립함수로 작성하라. 그리고 distance2 함수를 point 클래스의 프렌드로 지정하라.

        ```C++
        float distance2(point a, point b); // point 클래스의 프렌드
        ```

    * 아래의 main 함수를 사용하는 프로그램을 작성하고 실행하시오.

        ```C++
            int main() {
                point p1(3, 4), p2(-1, -5);
                cout << "p1과 p2 거리 = " << p1.two_distance(p2);
                cout << "p1과 p2 거리 = " << distance2(p1, p2);
            }
        ```

## 9주차

1. ex13-1에 있는 three_d 클래스에서 각각의 값을 곱하는 * 연산자를 중복하라.
    1. 멤버 함수를 사용하라.
    2. 프렌드 함수를 사용하라.

## 10주차

1. (ex.15-1)의 show_author() 함수를 가상함수로 선언하고 파생클래스에서는 show_author()가 author와 title를 함께 출력하도록 하세요.

2. n 값을 받아 n의 크기의 배열을 동적으로 생성하고 n개의 값을 입력받아 그 배열에 저장하고, 최대값을 출력하는 일반 클래스(template class)를 작성하라.

    > 5  
    > 20   40   15   80   55  
    > << 최대값 >>  
    > 3  
    > 60.5   10.8   35.3  
    > << 최대값 >>

* 멤버 변수: size, arr[]
* 멤버 함수: 생성자 함수, input(), max()  
* 테스트: main 함수에서 5개의 정수와 3개의 실수에 대해 테스터할 것