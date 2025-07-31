#include <iostream>
using namespace std;

int main() {
    string str1= "Pal ";
    string str2= "Jain";
    string str3= str1 + str2;

    cout << "string: " << str3 << endl;
    cout << "Length of the concatenated string is: "<< str3.length();
    return 0;
}
