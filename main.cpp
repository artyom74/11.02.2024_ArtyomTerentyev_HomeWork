/* ������������ ������ � ���������� ����� � ��������, ��������� � ������ ���. ������� �� ����� ������� ����� � �����,
������� � ��������. ���������, ������� �����, ����� � ������
�������� �� ��������. */

#include <iostream> 
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int SecInput, hour, min, sec, hour1, min1, sec1, temp;

	cout << "������� ����� � ��������: ";
	cin >> SecInput;

	hour = SecInput / 3600;
	temp = SecInput % 3600;
	min = temp / 60;
	sec = temp % 60;

	cout << "������:" << hour << "." << min << "." << sec << endl;

	temp = 86400 - SecInput;
	hour1 = temp / 3600;
	temp = temp % 3600;
	min1 = temp / 60;
	sec1 = temp % 60;

	cout << "������� �� ������: " << hour1 << ".";
	cout << min1 << "." << sec1 << endl;
	
	return 0;
}

