﻿// Программа получает на вход строку (имя пользователя) и на её основе выводит приветствие

#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	system("pause");
	return 0;
}
