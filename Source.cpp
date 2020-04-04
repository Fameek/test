#include <iostream>
using namespace std;
void striling(char a[80], char b[80] ,int n) {
	char c[160];
	int ww = 0;
	for (int i = 0; i < 80; i++) {
		if (a[i] == '\0') {
			
			break;
		}
		else{
			c[i] = a[i];
			ww++;
		}

	}
	for (int i = 0; i < n; i++) {
		if (b[i] == '\0') {
			c[ww + i] = '\0';
			break;
		}
		c[ww + i] = b[i];
		if (i == n-1) {
			c[ww + i + 1] = '\0';

		}

	}

	cout << c;
}


int main() {
	int n;
	char a[80];
	char b[80];
	cin >> n;
	cin >> a;
	cin >> b;

	char c[160]; 
	striling(a, b, n);

}