#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long count = 0;
    for(int i = 0; i < n; i++) { //3
        if(a[i] > a[i + 1]) {
            while(a[i + 1] < a[i]) {
                a[i + 1] += 1;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
// 3 2 5 1 7
// 3 3 5 1 7
// 3 3 5 2 7
// 3 3 5 3 7
// 3 3 5 4 7
// 3 3 5 5 7
