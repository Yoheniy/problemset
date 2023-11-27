#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
const int N=1e3+10;
int hsh[N];
int ar[N][N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
 double div;
 long int c1,c2;
 vector<long int>v;
    while(t--){
    int c1,c2;
     long int x;
     cin>>x;
     v.push_back(x);
    }
    REP(i,0,v.size()){
        div=v[i]/3.0;
        long int temp=round(div);
        c2=2*temp;
        c1=v[i]-c2;
        cout<<c1<<" "<<temp<<endl;

    }
    return 0;
}