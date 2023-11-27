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
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long m=((a%100)*(b%100)*(c%100)*(d%100));
    if(m%100<=9){
        cout<<"0";
}
    cout<<m%100;
    return 0;
}