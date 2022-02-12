//You are given an integer K.
/*
Consider an integer sequence A=[A1,A2,…,AN].

Define another sequence S of length N, such that Si=A1+A2+…+Ai for each 1≤i≤N.

A is said to be interesting if Ai+Si=K for every 1≤i≤N.

Find the maximum length of an interesting sequence. If there are no interesting sequences, print 0.

Input Format
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input, which contains a single integer K.
Output Format
For each test case, print a new line containing one integer — the maximum length of an interesting sequence for a given value of K.*/
#include <stdio.h>
#include<math.h>



int main()
{
   int n,sum=0;
   int k;
    scanf("%d",&n);
    while(n){
        
        scanf("%d",&k);
        int i=0,count=0;
        int x=k;
        while(x%2==0){
            x=x/2;
            count++;
        }
        printf("%d\n",count);
        
        n--;
        }
       
        
        
    

    return 0;
}

