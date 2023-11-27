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
    double a,b,div;
    cin>>a>>b;
    div=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(div)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(div)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(div)<<endl;

   
    return 0;
}