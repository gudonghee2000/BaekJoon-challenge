#include <iostream>

using namespace std;

int n, m;
int numbers[10];
int answer[10];
bool checker[10] = {false, };

void koo(int cnt) {
	if (cnt == m) {
		for (int i = 0; i <m; i++) {
			
				cout << answer[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <=n; i++) {
		if (!checker[i]) {
			checker[i] = true;
			answer[cnt] = i;
			koo(cnt + 1);
			checker[i] = false;
		}
	}
}

int main(){
	
	cin >> n;
	cin >> m;
	for (int i = 1; i <=n; i++) {
		numbers[i] = i;
	}

	koo(0);

	return 0;
}