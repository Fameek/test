#include <iostream>

using namespace std;
int main() {
	

	char tt[40];
	cin >> tt;
	int ww = 0;
	for (int i = 0; i < 40; i++) {
		if (tt[i] == '\0') {
			break;
		}
		else {
			ww++;
		}
	}
	for (int i = 0; i < ww; i++) {
		bool rr = isupper(tt[i]);
		if (i % 2 == 0) {
			if (rr == 1) {
				// и так большая
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
				// и так маленькая 
			}

		}
	}
	cout << tt << endl;


	return 0;
}