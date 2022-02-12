/* There are 101 citizens in Chefland. It is election time in Chefland and 3 parties, A,B, and C are contesting the elections. Party A receives XA votes, party B receives XB votes, and party C receives XC votes.

The constitution of Chefland requires a particular party to receive a clear majority to form the government. A party is said to have a clear majority if it receives strictly greater than 50 votes.

If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains 3 space-separated integers — XA, XB, and XC.
Output Format
For each test case, if any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

You can print each letter of the string in any case (upper or lower) (for instance, strings Nota, nOtA and notA will be considered identical). */

//elections in Chefland
#include <stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    
    while(n){
        scanf("%d %d %d",&a,&b,&c);
        if(a>50 && a>b && a >c){
            printf("a\n");
        }
        else if(b>50 && b>a && b>c){
            printf("b\n");
        }
        else if(c>50 && c>a && c>b){
            printf("c\n");
        }
        else{
            printf("NOTA\n");
        }
        
        n--;
    }
    return 0;
}

