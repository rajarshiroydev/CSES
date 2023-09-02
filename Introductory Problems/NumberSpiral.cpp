/**3 1 11 1 19 1
for every odd row, the value of the 
**/

#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    long i, j;
    while(t--) {
        cin >> i >> j;
        long diagonal = 0;
        if(i > j) {
            diagonal = (i * i) - (i - 1);
        }
        else diagonal = (j * j) - (j - 1);
        if(i == j) {
            cout << diagonal << endl;
        }
        else if(i > j) {
            if(i % 2 == 0) {
                cout << diagonal + (i - j) << endl;
            }
            else cout << diagonal - (i - j) << endl;
        }
        else {
            if(j % 2 == 0) {
                cout << diagonal - (j - i) << endl;
            }
            else cout << diagonal + (j - i) << endl;
        }
    }
}

