#include <stdio.h>

int main(void) {
    int n,k,i,m,count=1;
	scanf("%d",&n);
	while(n){
	   scanf("%d %d",&k,&m);
	   for(i=0;i<m;i++){
	    count=count*2;
	   if(count>=k){
	        break;}
	    if(i==11){
	        break;}
	        
	    }
	   for(i;i<m;i++){
	       count=count*3;
	       if(count>=k)
	        break;
	   }
	   printf("%d\n",count);
	    n--;
	}
	
	return 0;
}


