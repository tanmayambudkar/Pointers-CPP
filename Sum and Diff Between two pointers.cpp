#include <iostream>
using namespace std;

int main(){
    int i=90;
    int*i1;
    i1=&i;
    int j=80;
    int* j1;
    j1=&j;
    int sum, diff;
    sum=*i1+*j1;
    diff=*i1-*j1;
    cout<<"Pointer of i is: "<<i1;
    cout<<"\nPointer of j is: "<<j1;
    cout<<"\nSum of Value of Pointer i and j is: "<<sum;
    cout<<"\nDifference of Value of Pointer of i and j is: "<<diff;
    return 0;
}
/*
Pointer of i is: 0x7ffdd9db5544
Pointer of j is: 0x7ffdd9db5540
Sum of Value of Pointer i and j is: 170
Difference of Value of Pointer of i and j is: 10
*/