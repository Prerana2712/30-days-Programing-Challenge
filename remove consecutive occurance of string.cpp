#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

   
    string s[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> s[i];
    }

    bool removed[n] = {false}; 

    
    for (int i = 0; i < n - 1; ++i) {
        if (!removed[i]) {
            for (int j = i + 1; j < n; ++j) {
                if (!removed[j] && s[i] == s[j]) {
                    removed[i] = removed[j] = true;
                    break;
                }
            }
        }
    }

   
    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (!removed[i]) {
            ++c;
        }
    }

    cout << "Number of words left : " << c ;

    return 0;
}
