/*Given an array of n integers and an integer value p.
count the no of pairs whose sum is completely divisible by p.*/
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int noofpairs(vector<int>v,int n,int p){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[((v[i]%p)+p)%p]++;
    }
    int c=0;
    c+=(m[0]*(m[0]-1))/2;
    for(int i=1;i<=p/2&& i!=p-i;i++){
        c+=m[i]*m[p-i];
    }
    if((p&1)==0){
        c+=(m[p/2]*(m[p/2]-1))/2;
    }
    return c;

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
        int p;
        cin>>p;
        int res=noofpairs(v,n,p);
        cout<<res<<endl;
    }
    return 0;

}
