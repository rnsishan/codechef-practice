/*
Chef wants to make a purchase. For this, he needs X gold coins, but he has none at the moment.

Chef has N fixed deposits, the ith of which is worth Ai coins. He wants to open the minimum number of these deposits so that he has at least X coins.

You have to tell Chef the minimum number of fixed deposits he must open in order to have X coins, or say that this is impossible.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers — N and X, as described in the statement.
The second line of each test case contains N space-separated integers — the ith of which is Ai.
Output Format
For each test case, output one line containing the answer — the minimum number of FDs Chef must open to have at least X coins. If it is not possible for him to open FDs such that he has at least X coins, output −1.*/

#include <stdio.h>

int main()
{
    
    int j,a,n,i,x,t;
    scanf("%d",&t);
    
    while(t){
       scanf("%d %d",&n,&x);
       
       int arr[100];
       
       for(i=0;i<n;i++){
           scanf("%d",&arr[i]);
       }
       
       for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
      
        }
    int sumarr=0;
    for(i=0;i<n;i++){
        sumarr=sumarr+arr[i];
    }
    
        int sum=0,count=0;
        if(x>sumarr){
                printf("-1\n");
                
        }
        
        else{
            for(i=n-1;i>=0;i--)
            {
            if(x>sum)
            {
                sum=sum+ arr[i];
                count++;  
                
                
            }
        }
            printf("%d\n",count);
        }
            
        
       
       t--;
    }
    
    
    
    return 0;
}

