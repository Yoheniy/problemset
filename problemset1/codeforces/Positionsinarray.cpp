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
    cin>>a>>b;
    bool d=true;
    int i=1;
   
    while(b){
         int mul=a;
         mul*=i;
         if(mul%10==0||mul%10==b){
            cout<<i;
            return 0;
            d=false;
         }
         i++;
        

    }
    return 0;
}