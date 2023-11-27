#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
#define REPE(i,a,b) for (int i = a; i <=b; i++)

const int N=1e3+10;
int hsh[N];
int ar[N][N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    bool v=false;
    REPE(i,a,b){
        int x=i;
        bool flag=false;
        while(x>0){
            int r=x%10;
            if(r!=7&&r!=4){
                flag=true;
            }
            x/=10;
        }
            if(!flag){
            v=true;
              cout<<i<<" ";
            }
    }
if(!v)
{
    cout<<"-1";
}
    return 0;
}