#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
     int count=0;
     int n;cin>>n;
     string s;cin>>s;
     for(int i=0;i<n/2;i++){
         if(s[i]!=s[n-1-i]){
             count++;
         }
     }
     
     cout<<(count+1)/2<<endl;
}
void onlinejudge() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif 
}
int main() {
    onlinejudge();
    fastio
	int t; cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
