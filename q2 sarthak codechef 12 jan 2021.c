/*
Sarthak got an empty magic grid of size N×N on his birthday. The grid can only be filled with positive integers such that the bitwise XOR of all numbers from any row, any column, or any of the two main diagonals must all be the same! Can you help Sarthak fill this grid using only positive integers no more than 109?

Input Format
The first line of each input contains T - the number of test cases. The test cases then follow.
The only line of each test case contains an integer N - the size of the grid.
Output Format
For each test case, output N lines, each containing N space-separated integers, such that the grid satisfies the condition given in the statement.

Each integer should be positive and ≤109.

Constraints
1≤T≤100
1≤N≤100
Sample Input 1 
1
3
Sample Output 1 
1 1 1
1 1 1
1 1 1
*/


#include <stdio.h>

int main()
{
    int n,a,b,i,j,x;
    scanf("%d",&n);
    
    while(n){
        scanf("%d",&x);
    
        
        for(i=0;i<x;i++){
            for(j=0;j<x;j++)
                {   printf("1 ");
                }
                printf("\n");
        
        }
    
        n--;
    }
    
    
    return 0;
}

