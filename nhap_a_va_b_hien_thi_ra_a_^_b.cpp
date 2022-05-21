#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int answer = 1;
    for (; b > 0; answer *= a, b--);
    cout << answer;
    return 0;
}
