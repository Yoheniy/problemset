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
    long int n,x;
    vector<long int>v;
    cin>>n;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    long int w;
    cin>>w;
   for(int i=0;i<v.size();i++){
    if(v[i]==w){
        cout<<i;
        return 0;
    }
    else{
        continue;
    }
   }
   cout<<-1;
    return 0;
}