#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string tt;
	cin >> tt;
	for (int i = 0; i < tt.size(); i++) {
		bool rr = isupper(tt[i]);
		if (i % 2 == 0) {
			if (rr == 1) {
				// � ��� �������
			}
			else if (rr == 0) {
				char ee = tt[i] - 32;
				tt[i] = ee;
			}


		}
		else if (i % 2 == 1) {
			if (rr == 1) {
				char ee = tt[i] + 32;
				tt[i] = ee;
			}
			else if(rr == 0){
				// � ��� ��������� 
			}

		}
	}
	cout << tt << endl;

	return 0;
}