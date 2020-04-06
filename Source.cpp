#include <iostream>
#include <string>
using namespace std;
string striling(string a, string b, int n) {
	for (int i = 0; i < n; i++) {
		if (b[i] == '\0') {
			break;
		}
		else {
			a.push_back(b[i]);
		}
	}
	a.push_back('\0');
	return a;
}

int main() {
	
	string a;
	string b;	
	cin >> a;
	cin >> b;	
	cout << striling(a, b, 4);
}