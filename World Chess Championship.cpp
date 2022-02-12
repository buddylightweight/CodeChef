The World Chess Championship 2022 is about to start. 14 Classical games
will be played between Chef and Carlsen in the championship, where each game has one of three outcomes —
it can be won by Carlsen, won by Chef, or it can be a draw.
  The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both players get 1 point each.
  Constraints
1≤T≤1000
1≤X≤106
|S|=14
S contains only characters D, C, N.
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
4
100
CCCCCCCCCCCCCC
400
CDCDCDCDCDCDCD
30
DDCCNNDDDCCNND
1
NNDNNDDDNNDNDN
Sample Output 1 
6000
24000
1650
40
  
  CODE*****
  #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int X=0,c=0,d=0,n=0;    
	    cin>>X;
	    char strr[14];
	    cin>>strr;
	     for(int i=0;i<=14;i++){
	         if(strr[i]=='C')
	         c++;
	         else if(strr[i]=='N') 
	         n++;
	          else
	          d++;
	     }
	     c=2*c+d;
	     n=2*n+d;
	     if(c>n){
	         cout<<60*X<<endl;
	     }
	     else if(c<n){
	         cout<<40*X<<endl;
	     }
	     else{
	         cout<<55*X<<endl;
	     }
	  
	}
	return 0;
}
