#include<iostream>
using namespace std;
int main(){
	int n;
	int a[30];
	cout << "nhap so phan tu n:";
	cin >> n;
	for(int i = 0; i < n; i++)
	    cin >> a[i]; 
	cout << " sau khi nhap la:" << endl;
	for(int i = 0; i < n; i++){
		cout << "a["<< i <<"]=" << a[i] << endl;
	}
	int kiemtra = 1;
	int i = 0;
	cout<<"gia tri cua i la: " << i << endl;
	while(i < n){
		if(a[i+1] < a[i]){
			kiemtra = 0;
			cout << "day so k tang dan " << endl;
			break;
		}
		i++;
	}
	if(kiemtra == 1){
	    cout << "day tang dan";
	}		
}
