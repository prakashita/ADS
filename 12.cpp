//given an array of n integers . Find the element whose frequency is only 1 where as all
//other values frequency is 2.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[11]={7,3,5,3,9,2,6,6,2,7,5};
    int sum=0;
    for(int i=0;i<11;i++){
        sum=sum^a[i];
    }
    cout<<sum;
    return 0;
    
}