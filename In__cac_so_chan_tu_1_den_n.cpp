#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "In cac so chan tu 1 den " << n << " la:" << endl;
    for ( int i = 1; i <= n; i++) {
        if ( i % 2 == 0) {
        	cout << " " << i;
		}
	}
	return 0;
} 
