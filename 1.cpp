/*1. Given 2  + integers. give no. of operations required to equalise the 
two variables by subtracting lesser value from greater one repeatedly.*/
#include<iostream>
using namespace std;

int main() {
    int a, b;
    int c = 0;
    cin >> a >> b;
    // while (a != b) {
    //     if (a > b) {
    //         a = a - b;
    //     } else {
    //         b = b - a;
    //     }
    //     c += 1;
    // }
    //optimised
    while(b!=0){
        c+=(a/b);
        int r=a%b;
        a=b;
        b=r;
    }
    cout<< c-1;
    return 0;
}
