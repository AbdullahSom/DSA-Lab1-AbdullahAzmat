#include <iostream>
#include <string>
using namespace std;

int naiveSearch(const string &text, const string &pattern) {
    int n = text.length();
    int m = pattern.length();

    if (m == 0) return 0;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i;
    }
    return -1;
}

int main() {
    string text, pattern;

    // Example test cases
    text = "hello world";
    pattern = "hello";
    cout << "Pattern at beginning: " << naiveSearch(text, pattern) << endl; // 0

    text = "hello world";
    pattern = "world";
    cout << "Pattern at end: " << naiveSearch(text, pattern) << endl; // 6

    text = "hello world";
    pattern = "abc";
    cout << "Pattern not present: " << naiveSearch(text, pattern) << endl; // -1

    text = "hello world";
    pattern = "";
    cout << "Empty pattern: " << naiveSearch(text, pattern) << endl; // 0

    return 0;
}
