#include <iostream>
using namespace std;
 
int main() {
int arr[5]={10,20,30,40,50};
int sum=0;
int average;
for(int i=0;i<5;i++){
    sum=sum+arr[i];
}
average=sum/5;
cout<<"This is the sum: "<<sum<<endl;
cout<<"This is average: "<<average;
}

/*
This is the sum: 150
This is average: 30
    */
