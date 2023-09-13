// main.cpp
#include <iostream>
#include "Date.h"
#include "Employee.h"
using namespace std;

int main() {
	Date birth{ 7, 24, 1949 };
	Date hire{ 3, 12, 1988 };
	Employee manager{ "Bob", "Blue", birth, hire };

	cout << "\n" << manager.toString() << endl;

	return 0;
}

/*
Date birth{7, 24, 1949};
Date hire{3, 12, 1988};
에서는 Date클래스에서 미리 만들어놓은 생성자 함수에 의해 객체가 생성되고,
동시에 함수 내에 있는 객체가 생성됨을 알리는 출력이 이루어진다.

하지만, Employee타입의 객체 manager가 생성될 때 생성자 함수를 보면
인자로 Date& 타입의 변수를 받는 걸 알 수 있다.
여기서 함수가 작동할 때 const Date& = birth; const Date& hire;가 실행되고
자신과 같은 타입이 인자로 받는 경우 복사 생성자 함수가 실행된다.

이 코드에서 복사 생성자 함수를 따로 작성하지 않았으므로
Date(const date& origin){
	month = origin.month;
	day = origin.day;
	year = origin.year;
}
과 유사한 기본 복사 생성자 함수가 작동된다. 여기에는 출력문이 포함되어 있지 않다.

실제로 생성된 객체 5개, 작성한 코드에 의해 생성된 객체 3개, 기본 복사 생성자 함수로 생성된 객체 2개
소멸한 객체 5개.
(클래스는 하나의 소멸자만 갖는다.
두 개의 클래스의 소멸자에 모두 출력문을 작성했으므로
5번의 출력문을 확인할 수 있었다.)
*/