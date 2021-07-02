

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string s;

    getline(cin, s);

   
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string result = "";

    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            result += s[i];
        }
    }
   
    cout << result;
}

