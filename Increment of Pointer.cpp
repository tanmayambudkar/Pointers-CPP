#include <iostream>
using namespace std;

int main(){
    int i=90;
    int*i1;
    i1=&i;
    cout<<"Before Increment(INT): "<<i1;
    i1++;
    cout<<"\nAfter Increment(INT): "<<i1;
    float f=10.1;
    float*f1;
    f1=&f;
    cout<<"\nBefore Increment(FLOAT): "<<f1;
    f1++;
    cout<<"\nAfter Increment(FLOAT): "<<f1;
    double d=201020;
    double*d1;
    d1=&d;
    cout<<"\nBefore Increment(DOUBLE): "<<d1;
    d1++;
    cout<<"\nAfter Increment(DOUBLE): "<<d1;
    bool b=true;
    bool*b1;
    b1=&b;
    cout<<"\nBefore Increment(BOOL): "<<b1;
    b1++;
    cout<<"\nAfter Increment(BOOL): "<<b1;
    return 0;
}
/*
OUTPUT:
Before Increment(INT): 0x7fff9a401e0c
After Increment(INT): 0x7fff9a401e10
Before Increment(FLOAT): 0x7fff9a401e08
After Increment(FLOAT): 0x7fff9a401e0c
Before Increment(DOUBLE): 0x7fff9a401e00
After Increment(DOUBLE): 0x7fff9a401e08
Before Increment(BOOL): 0x7fff9a401dff
After Increment(BOOL): 0x7fff9a401e00
*/