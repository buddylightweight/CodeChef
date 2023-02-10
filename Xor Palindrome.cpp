A (1-indexed) binary string S of length N is called a xor palindrome if the value of Si⊕S(N+1−i) is the same for all 1≤i≤N.

For example, 0, 1111 and 0101 are xor palindromes, while 1110 and 110101 are not.

You are given a binary string S of length N. Determine if it is possible to rearrange it to form a xor palindrome or not.
  Constraints
1≤T≤1000
1≤N≤105
S is a binary string, i.e, contains only the characters 0 and 1
It is guaranteed that the sum of N over all test cases does not exceed 2⋅105.
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
4
2
00
4
0011
3
001
4
0001
Sample Output 1 
YES
YES
YES
NO
// CDOE
// time complexity O(N)
// space complexity O(1)
#include <iostream>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     ll n;
	     string str;
	     cin>>n>>str;
	     ll one =0,zero=0;
	      for(int i=0;i<n;i++){
	          if(str[i]=='1')
	              one++;
	          
	          else
	              zero++;
	      }
	           if(n%2==0)
	           {
	               if(one%2==0 && zero %2==0)
	                   cout<<"YES"<<endl;
	               
	               else if(one ==zero)
	                   cout<<"YES"<<endl;
	               
	               else
	                   cout<<"NO"<<endl;
	               
	           }
	           
	           else
	           {
	               if(one > zero)
	               {
	                   
	                   if((one-zero)%2==1)
	                   
	                       cout<<"YES"<<endl;
	                   
	                   else
	                       cout<<"NO"<<endl;
	               }
	               else
	               {
	                   if((zero-one)%2==1)
	                   cout<<"YES"<<endl;
	                   else
	                   cout<<"NO"<<endl;
	               }
	               
	           }
	      }
	   
	return 0;
}
