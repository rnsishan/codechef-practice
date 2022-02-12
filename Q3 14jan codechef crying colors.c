/* CRYING COLORS
You have a total of 3N balls of colours Red, Blue and Green. There are exactly N balls of each colour.

These 3N balls are now distributed to 3 boxes such that each box contains exactly N balls. You are given the contents of each box.

You would like the 1st box to contain all the red balls, the 2nd box to contain all the green balls, and the 3rd box to contain all the blue balls. Note that the given order of boxes is important here — it is not enough for each box to contain only balls of a single colour.

To achieve this, you can perform the following operation several (possibly, zero) times:

Pick any two distinct boxes, pick any one ball from each of these two boxes, and swap them.
Determine the minimum number of operations required to satisfy the given condition.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of 4 lines of input.
The first line of each test case contains a single integer N, denoting the number of balls of each colour.
The i-th of the next three lines contains three space-separated integers Ri,Gi and Bi — the number of red, green, and blue balls in the i-th box respectively.
Output Format
For each test case, output a single line containing one integer — the minimum number of operations required such that the given condition is satisfied.

Constraints
1≤T≤1000
1≤N≤1000
0≤Ri,Gi,Bi≤N
R1+G1+B1=R2+G2+B2=R3+G3+B3=N
R1+R2+R3=G1+G2+G3=B1+B2+B3=N
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
2
3
3 0 0
0 3 0
0 0 3
5
2 1 2
1 4 0
2 0 3
Sample Output 1 
0
3
*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    while(n--){
    int i,b,g1,g2,g3,b1,b2,b3,r1,r2,r3,d,k;
    
    scanf("%d",&b);
   
        scanf("%d %d %d",&r1,&g1,&b1);
        scanf("%d %d %d",&r2,&g2,&b2);
        scanf("%d %d %d",&r3,&g3,&b3);
    
    d=g1+b1+b2;
    k=r2+r3+g3;
    
    printf("%d\n",((d>k) ? d : k));
    
    
    }
    

    return 0;
}


