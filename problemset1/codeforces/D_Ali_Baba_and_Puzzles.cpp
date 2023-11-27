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
   long long a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a+b-c==d||a+b*c==d||a-b+c==d||a-b*c==d||a*b+c==d||a*b-c==d){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
   

    return 0;
}