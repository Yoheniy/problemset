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
    int k,s,r;
    cin>>k>>s;
    r=k+s;
    r+=(k+1)%s;
    cout<<r;
    //or
    /*EPE(i,0,k){
        REPE(j,0,k){
            if(s-i-j>=0&&s-i-j<=k)c++;

    }cout<<c;   */

    
    return 0;
}