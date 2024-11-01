//prefix sum array...find the sum of elements of array in given m number of ranges
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={9,10,12,20,36,2,10,24,20,24};
    int psa[11]={0,9,19,31,51,87,89,99,123,143,167};
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int l,h;
        cin>>l>>h;
        if(l>h || l<0 || h>10){
            cout<<-1<<endl;
        }
        else{
            cout<<psa[h+1]-psa[l]<<endl;
        }
    }
}