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
   int a,b,c;
   char o,e;
   cin>>a>>o>>b>>e>>c;
   if(o=='+'){
    if(a+b==c){
        cout<<"Yes";
    }
    else{
        cout<<a+b;
    }
   }
 
   else if(o=='-'){
    if(a-b==c){
        cout<<"Yes";
    }
    else{
        cout<<a-b;
    }
   }
  
  else if(o=='*'){
    if(a*b==c){
        cout<<"Yes";
    }
    else{
        cout<<a*b;
    }
   }
   else{
    return 0;
   }
    return 0;
}