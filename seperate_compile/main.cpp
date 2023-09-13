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
������ DateŬ�������� �̸� �������� ������ �Լ��� ���� ��ü�� �����ǰ�,
���ÿ� �Լ� ���� �ִ� ��ü�� �������� �˸��� ����� �̷������.

������, EmployeeŸ���� ��ü manager�� ������ �� ������ �Լ��� ����
���ڷ� Date& Ÿ���� ������ �޴� �� �� �� �ִ�.
���⼭ �Լ��� �۵��� �� const Date& = birth; const Date& hire;�� ����ǰ�
�ڽŰ� ���� Ÿ���� ���ڷ� �޴� ��� ���� ������ �Լ��� ����ȴ�.

�� �ڵ忡�� ���� ������ �Լ��� ���� �ۼ����� �ʾ����Ƿ�
Date(const date& origin){
	month = origin.month;
	day = origin.day;
	year = origin.year;
}
�� ������ �⺻ ���� ������ �Լ��� �۵��ȴ�. ���⿡�� ��¹��� ���ԵǾ� ���� �ʴ�.

������ ������ ��ü 5��, �ۼ��� �ڵ忡 ���� ������ ��ü 3��, �⺻ ���� ������ �Լ��� ������ ��ü 2��
�Ҹ��� ��ü 5��.
(Ŭ������ �ϳ��� �Ҹ��ڸ� ���´�.
�� ���� Ŭ������ �Ҹ��ڿ� ��� ��¹��� �ۼ������Ƿ�
5���� ��¹��� Ȯ���� �� �־���.)
*/