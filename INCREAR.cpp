#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==y)
	    {
	        cout << 0 << endl;
	    }
	    else if(x<y)
	    {
	        cout << y-x << std::endl;
	        
	    }
	    else
	    {
	        if((x-y)%2==0){
	            cout << (x-y)/2 <<endl;
	        }
	    
	        else{
	            cout <<((x-y)/2)+2 << endl;
	        }
	    }
	}

}
