/*
Vedant has a hidden array of N elements. Given the bitwise AND of all elements of the array, determine whether the total sum of the elements is odd, even or cannot be determined.

Input Format
The first line of each input contains T - the number of test cases. The test cases then follow.
The only line of each test case contains two space-separated integers N and A - the number of elements in the hidden array and the bitwise AND of all the elements in the hidden array.
Output Format
For each test case, output Even if the sum of all elements in the hidden array is even, Odd if the sum of all elements in the hidden array is odd, or Impossible if the parity cannot be determined.

Note: You may print each character of the string in uppercase or lowercase (for example, the strings eVen, EvEn, even and EVEN will all be treated as identical).

Constraints
1≤T≤10000
1≤N≤109
0≤A≤109
Sample Input 1 
3
1 11
1 2
74120341 829182732
Sample Output 1 
Odd
Even
Impossible
*/
#include <iostream>

using namespace std;





void solve(){
    int n,a;
    cin>>n>>a;
    if(a%2!=0){
        if(n%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    else if(n==1) cout<<"even"<<endl;
    else cout<<"impossible"<<endl;
}

int main(){
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}

/* the logic behind this is that using AND,
check n is odd or even.
AND will be odd when odd elemnts n= odd(odd)
                                n=even(even)
    even elements-> n=1(even)
            n!=1(impossible)
*/
