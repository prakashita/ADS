/*Given an array of n integers. Count the no. of equilibrium indices.
# Equilibrium Index: If the sum of the element at the left side of a 
index is same as the sum at the right side of the index is known as equilibrium index. */

#include <bits/stdc++.h>
using namespace std;
int noeqin(vector<int>v,int n){
    int totalSum = accumulate(v.begin(), v.end(), 0);
    int leftSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        totalSum -= v[i]; 

        if (leftSum == totalSum) {
            count++;  
        }

        leftSum += v[i];  

    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        int res=noeqin(v,n);
        cout<<res<<endl;
    }
}