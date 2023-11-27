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
    double x,p,orginalvalue,rem;
    cin>>x>>p;
    rem=100.00-x;
    orginalvalue=(p*100.00)/rem;
    cout<<fixed<<setprecision(2);
    cout<<orginalvalue;
    return 0;
}