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
   double r,area;
   cin>>r;
   double pi=3.141592653;
   area=pi*r*r;
   cout<<fixed<<setprecision(9);
   cout<<area;
    return 0;
}