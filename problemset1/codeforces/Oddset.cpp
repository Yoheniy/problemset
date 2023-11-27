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
vector<int>v;
    while(t--){
     int n;
     cin>>n;
     REP(i,0,2*n){
        int x;
        cin>>x;
        v.push_back(x);
     }
   
     int even=0,odd=0;
     REP(i,0,v.size()){
        if(v[i]%2==0){

       even++;
       continue;
            
        }
        else{
           odd++;
           continue;
        }
     }
     
     if(odd!=even) {cout<<"NO\n";}
     else {cout<<"YES\n";}
  v.clear();
    }
    return 0;
}