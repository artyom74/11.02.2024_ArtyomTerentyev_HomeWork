/* ������������ ������ � ���������� ����� � ��������, ��������� � ������ �������� ���. ���������, ������� ����� �����
��� �������� �������� ���� ������� ���� � 8 �����. */

#include <iostream> 
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int SecInput, hour, difference;

	cout << "������� ����� ��������� � ������ �������� ��� � ��������: ";
	cin >> SecInput;
	
	difference = 28800 - SecInput;
	hour = difference / 3600;

	cout << "�� ����� �������� ��� ��������: ";
	cout << hour << "\n";

	return 0;
}

