#include<iostream>
#include<math.h>

using namespace std;

int kiemtra(int n){
	if(n < 2){
		cout << " True";
	}
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if( n % i == 0){
			dem ++;
			break;
		}
	}
	if(dem == 0){
		cout << n << " True" << endl;
	}else{
		cout << n << " False" << endl;
	}
	return n;
}

int main(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	kiemtra(n);
}
