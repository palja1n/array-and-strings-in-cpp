#include <iostream>
using namespace std;

int main() {
int marks[6];
cout<<"The marks of student in six subjects are:"<<endl;

for(int i=0; i<6; i++){
    cin>>marks[i];
}

for(int n=0; n<6; n++){
    cout<<marks[n]<<" ";
}

   return 0;
}
