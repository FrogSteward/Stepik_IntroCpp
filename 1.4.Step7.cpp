/*
	1.4 �������� ��������. ��� 7

	���� ��� ����� �����. ����������, ������� ����� ��� �����������. ��������� ������ ������� ���� �� �����: 
	3 (���� ��� ���������), 2 (���� ��� ���������) ��� 0 (���� ��� ����� ��������).

	������ ������� ������:
	�������� ��� �����.
	������ �������� ������:
	�������� ����� �� ������.
	Sample Input: 1 2 3
	Sample Output: 0
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a != b && a != c && b != c) {
			cout << "0";
		} else if (a == b && b == c) {
			cout << "3";
		} else {
			cout << "2";
		}
	}
	return 0;
}