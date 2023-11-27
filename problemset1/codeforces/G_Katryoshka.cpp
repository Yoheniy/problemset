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
    long long n,m,k;
    cin>>n>>m>>k;
    long long c=0;
  long long mn=min({n,m,k});
  c+=mn;
  n-=mn;
  m-=mn;
  k-=mn;


  mn=min(n/2,k);
  c+=mn;
   cout<<c;
    return 0;
}