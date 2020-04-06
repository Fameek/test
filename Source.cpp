#include <iostream>
#include <string>
using namespace std;
int eerwer(char a[80], char b[80], int eee) {
	while (1) {
		if (eee == 80) {
			break;
		}
		else {
			if (a[eee] == b[0]) {
				int rrr = 0;
				while (1) {
					if (b[rrr] == '\0') {
						return eee;		
					}
					if (a[eee + rrr] == b[rrr]) {
						rrr++;
					}
					else if (a[eee + rrr] != b[rrr]) {
						break;
					}
				}
			}
			eee++;
		}
	}
	if (eee == 80) {
		return 999;
	}
	else {
		return eee;
	}
}


int main() {
	char a[80];
	cin.getline(a,80);
	char b[80];
	cin.getline(b,80);
	int eee = 0;
	while (1) {
		eee = eerwer(a, b , eee);
		if (eee == 999) {
			break;
		}
		else {
			cout << eee << " ";
			eee++;

		}
	}


}