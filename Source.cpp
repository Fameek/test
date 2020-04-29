
#include <iostream>
using namespace std;
int main() {
	char a[80];
	cin.getline(a, 80);
	char b[80];
	int eee = 0;
	int min = 0;
	int tt = 0;
	while (1) {
		if (a[eee] == '\0') {
			break;
		}
		if (a[eee] != ' ' && a[eee] != '.' && a[eee] != ',' && a[eee] != '!' && a[eee] != '?' && a[eee] != ';' && a[eee] != ':') {
			tt++;
			if (a[eee + 1] == '\0' || a[eee + 1] == ' ' || a[eee + 1] == '.' || a[eee + 1] == ',' || a[eee + 1] == '!' || a[eee + 1] == '?' || a[eee + 1] == ';' || a[eee + 1] == ':') {
				if (min == 0 || min > tt) {
					min = tt;

					for (int i = 0; i < min; i++) {
						b[i] = a[eee - min + i + 1];
					}
					b[min] = '\0';
				}

				tt = 0;

			}

		}
		eee++;
	}
	if (min == 0) {
		cout << "ERROR" << endl;
	}
	else {
		cout << b << endl;
	}
}