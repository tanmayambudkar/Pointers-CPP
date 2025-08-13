#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int *p = &arr[4];
    for(int i=0;i<5;i++){
        cout << *p << " ";
        p--;
    }
    return 0;
}
/*
OUTPUT:
5 4 3 2 1
*/