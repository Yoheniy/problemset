
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
    int a,b;
    cin>>a;
    
    return 0;
}

        for(int i=0;i<shifts.size();i++){
                if(shifts[i][2]==0){
                    v[shifts[i][0]]-=1;
                    v[(shifts[i][1])+1]+=1;
                }
                else{
                    v[shifts[i][0]]+=1;
                    v[(shifts[i][1])+1]-=1;
                }

        }
          pf[0]=v[0];
    for(int i=1;i<pf.size();i++){
    pf[i]=pf[i-1]+v[i];
        
    }