#include <iostream>
using namespace std;

int main() {
int arr[6];
int reverse_array[6];
cout<<"The numbers of array are:"<<endl;

for(int i=0; i<6; i++){
    cin>>arr[i];
}

for(int n=0; n<6; n++){
    cout<<arr[n]<<" ";
}
cout<<"\nReversed array is: ";
for(int i=5; i>=0; i--){
    cout<<arr[i]<<" ";
}

   return 0;
}

/*
Output:
The numbers of array are:
3 4 5 8 9 8
3 4 5 8 9 8 
Reversed array is: 8 9 8 5 4 3
    */
