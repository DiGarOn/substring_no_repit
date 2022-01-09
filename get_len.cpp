//Given a string, find the length of the longest substring without repeating characters.
#include <iostream>
#include <string>

using namespace std;

int get_len(string str) {
    int res = 0;

    int ma = 0;
    char sec = str[0];
    for(int i = 1; i < str.size(); i++) {
        char fir = sec;
        sec = str[i];
        if(fir != sec) {res++;}
        else {ma = ma > res ? ma:res; res = 1;}
    }

    res = ma > res ? ma : res;

    return res; 
}

int main() {
    string str;
    cin >> str;

    cout << "length of the longest substring without repeating characters is " << get_len(str);

    return 0;
}