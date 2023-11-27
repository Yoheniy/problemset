#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <=b; i++)
const int N=1e3+10;
int hsh[N];
int ar[N][N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,k,b;
        cin>>n>>k;
        vector< ll > v, pre (n+1);
 for (ll i = 0; i < n; i++) {
    cin>>b;
    v.push_back(b);
 }
ll maxi = 0;
sort (v.begin(), v.end());
for (ll i = 0; i < n; i++) {
    pre[i+1] = pre[i]+v[i];
}
for (ll i = 0; i <= k ; i++) {

maxi = max(maxi, pre[n-i]-pre [2* (k-i)]);
}
cout<<maxi<<endl;
        }
        
    
    return 0;
}