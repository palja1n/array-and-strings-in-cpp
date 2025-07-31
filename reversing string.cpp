#include <iostream>
using namespace std;

int main() {
    
    char str[6] = {'H','e','l','l','o','\0'};

    for(int i = 4; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}

//Output: olleH
