#include <stdio.h>

/*
There are three combos A, B, and C available at the counter. You are given the time (in minute) for which each Popcorn bucket and Coke cup lasts. Given that Vishesh's satisfaction from a combo is defined as the total lasting time (in minute) of the Popcorn bucket and the Coke cup, find the maximum satisfaction he can get by buying a single combo.

Input Format
The first line of each input contains T - the number of test cases. The test cases then follow.
The first line of each test case contains two space-separated integers A1 and A2, meaning that for combo A, the Popcorn bucket lasts A1 minutes and the Coke cup lasts A2 minutes.
The second line of each test case contains two space-separated integers B1 and B2, meaning that for combo B, the Popcorn bucket lasts B1 minutes and the Coke cup lasts B2 minutes.
The third line of each test case contains two space-separated integers C1 and C2, meaning that for combo C, the Popcorn bucket lasts C1 minutes and the Coke cup lasts C2 minutes.
*/

int main()
{
    int n,c1,p1,c2,p2,e1,e2,i,big;
    scanf("%d",&n);

    while(n){
        scanf("%d %d",&c1,&c2);
        scanf("%d %d",&p1,&p2);
        scanf("%d %d",&e1,&e2);
       
        big=((c1+c2)>(p1+p2)&&(c1+c2)>(e1+e2)?(c1+c2):(p1+p2)>(e1+e2)?(p1+p2):(e1+e2));        
    
              printf("%d\n",big);
              n--;
    }
    

    return 0;
}

