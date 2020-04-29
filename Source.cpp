#include <iostream>
#include <clocale>
#include <cctype>
#include<cstring>
#include <Windows.h>
#include <vector>
using namespace std;
char* strn_cat(char* a, char* b, int r)
{
	int a_size = 0; 
	for (int i = 0;  ; i++) {
		if (a[i] == '\0') {
			break;
		}
		a_size++;
	}
	int b_size = 0;
	for (int i = 0; ; i++) {
		if (b[i] == '\0') {
			break;
		}
		b_size++;
	}
	if (b_size < r) {
		for (int i = 0; i < b_size; i++) {
			a[a_size + i] = b[i];
		}
		a[a_size + b_size] = '\0';
	}
	else {
		for (int i = 0; i < r; i++) {
			a[a_size + i] = b[i];
		}
		a[a_size + r] = '\0';

	}
	
	return a;
}
int main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите строку 1:\n ";
	char a[10000];
	cin.getline(a, 10000);
	cout << "Введите строку 2:\n ";
	char b[10000];
	cin.getline(b, 10000);
	int r = 0;
	cout << "Введи количество символом которые будт перенесы в конец строки 2 \n: ";
	cin >> r;
	strn_cat(a, b, r);
	cout << a;
	

	





	
}