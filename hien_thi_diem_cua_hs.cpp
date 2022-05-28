#include<iostream>

using namespace std;

int main() {
	int score;
	cin >> score;
	if (score < 0 || score > 10) {
		cout << "khong hop le";
	} else {
		cout << "hop le";
	}
	return 0;
}
