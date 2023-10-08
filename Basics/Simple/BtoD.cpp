#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int pw = 1;
    while (n > 0) {
        int untis_digit = n % 10;
        ans += pw * untis_digit;
        n /= 10;
        pw *= 2;
    }
    cout << ans << endl;
}