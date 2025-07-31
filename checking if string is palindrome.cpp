#include <iostream>
using namespace std;

int main() {

    char a[100];
    cout << "Enter a word: ";
    cin >> a;

    int n = 0;
    while (a[n] != '\0') {
        n++;
    }

    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}

// output:
// Enter a word: racecar
// It is a palindrome.
