#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a String: ";
    cin>>str;
    string*str1;
    str1=&str;
    cout<<*str1;
    return 0;
}
/*
OUTPUT:
Enter a String: Tanmay
Tanmay
*/