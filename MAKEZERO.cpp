#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n;
         cin>>n;
       int arr[n];
        int count = 0;
       for (int i = 0; i <n; i++) {
        cin>>arr[i];
        count = count|arr[i];
       }
      
      int z = __builtin_popcount(count);
      cout<<z<<endl;
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
