//if a given number is prime or not
//all prime is in form 6k+-1 except for 2 and 3
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int q;
    q=sqrt(n);
    int flag=0;
    if(n!=2 && n%2==0){
        flag=1;
    }
    else if(n!=3 && n%3==0){
        flag=1;
    }
    else{
        for(int i=5;i<=q;i+=6){
            if(n%i==0 || n%(i+2)==0){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}