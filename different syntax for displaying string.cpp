#include <iostream>
using namespace std;

int main() {
    char str1[4] = "C++";
    char str2[] = {'C','+','+','\0'};
    char str3[4] = {'C','+','+','\0'};
    string str4 = "C++";

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl;

    return 0;
}

/*
str1: C++
str2: C++
str3: C++
str4: C++
    */
