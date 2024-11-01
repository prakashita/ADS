#include <stdio.h>

int main(void) {
	// your code goes here
	int t,c=0;
    scanf("%d",&t);
    while(t--){
        int e,k;
        scanf("%d %d",&e,&k);
        int x=0,c=0;
	    while(e!=0)
	    {
	        x=e/k;
	        e=e/k;
	        c++;
	    }
        printf("%d\n",c);
    }
	return 0;
}

