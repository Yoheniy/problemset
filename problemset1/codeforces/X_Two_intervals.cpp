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
   long long l1,l2,r1,r2;
   cin>>l1>>r1>>l2>>r2;
if(max(l1,l2)>min(r1,r2)){
    cout<<"-1";
}
else{
    cout<<max(l1,l2)<<" "<<min(r1,r2);
}
    return 0;
}