/* Пользователь вводит с клавиатуры время в секундах, прошедшее с начала рабочего дня. Посчитать, сколько целых часов
ему осталось работать если рабочий день — 8 часов. */

#include <iostream> 
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int SecInput, hour, difference;

	cout << "Введите время прошедшее с начала рабочего дня в секундах: ";
	cin >> SecInput;
	
	difference = 28800 - SecInput;
	hour = difference / 3600;

	cout << "До конца рабочего дня осталось: ";
	cout << hour << "\n";

	return 0;
}

