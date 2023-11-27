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
   long double a,b,c,d,a1,c1;
   cin>>a>>b>>c>>d;
   bool s=false;
   a1=pow(a,b);
   c1=pow(c,d);/*
   if(a1>c1){
    cout<<"YES";
   }
   else{
  cout<<"NO";
   }*/
  cout<<((a1>c1)?"YES":"NO");
    return 0;
}