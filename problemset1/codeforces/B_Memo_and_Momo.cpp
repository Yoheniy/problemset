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
    
   int a,b,k;
   char c;
   cin>>c;
   if((int)c==122){
    cout<<"a";
   }
   else{
    c=(char)((int)c+1);
    cout<<c;
   }

    return 0;
}