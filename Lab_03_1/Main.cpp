// Lab_03_1.cpp
// ��� �����
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 27

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = abs(9 * pow(x, 3) + 2);
	// ����� 1: ������������ � ��������� ����
	if (x < 4)
		B = 3 * (pow(x, 5)) - (pow(x, 3)) + (2 * x) - 1;
	if (4 <= x && x < 7)
		B = atan((x - 2) / 3);
	if (x >= 7)
		B = log((pow(2 * x, -1)) + pow(exp(1), (3 * x) + 1));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 4)
		B = 3 * (pow(x, 5)) - (pow(x, 3)) + (2 * x) - 1;
	else
		if (x >= 7)
			B = log((pow(2 * x, -1)) + pow(exp(1), (3 * x) + 1));
		else
			B = atan((x - 2) / 3);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}