#include <iostream>
using namespace std;

int main() {
    int arr[5] = {20, 40, 80, 90, 30};
    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < 5; i++) {
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << "The minimum number is: " << min << endl;
    cout << "The maximum number is: " << max << endl;

    return 0;
}

/*
The minimum number is: 20
The maximum number is: 90
*/
