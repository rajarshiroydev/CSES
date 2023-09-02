#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i = 0, count = 0, largest_count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s[i + 1]) {
            count++;
            if(count > largest_count) largest_count = count;
        } 
        else if(s[i] != s[i + 1]) count = 0;
    }
    cout << largest_count + 1;
}