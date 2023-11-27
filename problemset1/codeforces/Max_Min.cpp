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
   int a,b,c;
   cin>>a>>b>>c;
   set<int>s;
   s.insert(a);
   s.insert(b);
   s.insert(c);
   auto it=--s.end();
   cout<<*(s.begin())<<" "<<(*s.rbegin());
   

    return 0;
}