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
   long int a,b,c,d;
   cin>>a>>b>>c>>d;
   long int mult=1;
   //mult=(a*b*c*d)%100;
   a=a%100;
   b=b%100;
   c=c%100;
   d=d%100;
   mult=(a*b*c*d)%100;
   if(mult<10){
    cout<<0;
   }
   else{
    cout<<mult;
   }
  
    return 0;
}