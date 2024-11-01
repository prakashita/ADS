//Given integer n and k 
//how do you find kth bit in n is set or not 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=124;
    int k=5;
    int t=1<<k;
    if((n & t)==0){
        cout<<"Not set";
    }
    else{
        cout<<"SET";
    }
}