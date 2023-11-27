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
    int n;
    cin>>n;
    vector<int>v;
    REP(i,0,n){
        int x;
        cin>>x;
        v.push_back(x);
    }
    REP(i,0,v.size()){
        if(v[i]>0){
            v[i]=1;
        }
        else if(v[i]<0){
            v[i]=2;
        }
        else{
            continue;
        }
    }
     REP(i,0,v.size()){
        cout<<v[i]<<" ";
     }
    return 0;
}