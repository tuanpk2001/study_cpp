#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n;
    cout << "Nhap n = ";
    cin >> n;
    if(n < 2){
        cout << n << " khong phai so nguyen to" << endl;
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << n << " la so nguyen to" << endl;
    }else{
        cout << n << " khong phai so nguyen to" << endl;
    }
}
 
