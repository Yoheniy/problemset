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
   int n;
   cin>>n;
   int yr=0,m=0,d=0;
   while(n>=365){
      yr++;
      n=n%365;
   }
   
   while(n>=30){
    m++;
    n=n%30;

   }
   if(n<30){
    d=n;
   }
   cout<<yr<<" years"<<"\n";
   cout<<m<<" months"<<"\n";
   cout<<d<<" days"<<"\n";


    return 0;
}