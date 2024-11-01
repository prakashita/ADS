//given an array of elements of 1's and 0's sort the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={1,1,0,0,1,1,0,0,1,1};
    int l=0,h=9;
    while(l<h){
        if(a[l]==0){
            l++;
        }
        else if(a[h]==1){
            h--;
        }
        else if(a[l]==1 && a[h]==0){
            a[l]=0;
            a[h]=1;
            l++;
            h--;
        }
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}