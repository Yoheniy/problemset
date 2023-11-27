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

   int n,g;
   cin>>n>>g;
   int c=0;
multiset<int>m;
  while(n--){
    int t;
    cin>>t;
    m.insert(t);
  }
 /*if(t<0){
        c+=t;
    
    }
    else{
        continue;
    }
 */   
 int ind=1;
 for(auto it=m.begin();it!=m.end()&&ind<g;it++){
    c+=*it;
    ind++;
 }
  cout<<abs(c);
    return 0;
}