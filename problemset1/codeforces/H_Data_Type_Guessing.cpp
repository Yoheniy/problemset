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
double a,k,n;
cin>>n>>k>>a;
long long q=((n*k)/a);
double d=((n*k)/a);
if(d-q>0){
    cout<<"double";
}
else if(q>2147483647){
    cout<<"long long";
}
else
{
    cout<<"int";
}
    return 0;
}