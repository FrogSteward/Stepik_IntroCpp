/*
	1.4 �������� ��������. ��� 10

	��������� ���� ����� �� ���������. ���� ��� ��������� ������ ��������� �����, ����������, 
	����� �� ���� ������� � ������ ������ �� ������ ����� �����.

	������ ������� ������:
	��������� �������� �� ���� ������ ����� �� 1 �� 8 ������, �������� ����� ������� � ����� ������ 
	������� ��� ������ ������, ����� ��� ������ ������.
	������ �������� ������:
	��������� ������ ������� YES, ���� �� ������ ������ ����� ����� ����� ������� �� ������ ��� 
	NO � ��������� ������.
	Sample Input: 4 4 5 5
	Sample Output: YES
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		/*
		int r;
		r = x1 * 10 + y1 - x2 * 10 - y2;
		if (r % 9 == 0 || r % 11 == 0) {
			cout << "YES";
		} else {
			cout << "NO";
		}*/

		int x, y;
		x = (x1 - x2);
		y = (y1 - y2);
		if (x * x == y * y) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	return 0;
}