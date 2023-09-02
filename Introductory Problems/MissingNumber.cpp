#include<iostream>
using namespace std;
int main() {
    long long n, a;
    cin >> n;
    long long sum = 0;
    int k = n - 1;
    while(k--) {
        cin >> a;
        sum += a;
    }
    cout << (n * (n + 1)) / 2 - sum;
    return 0;
}