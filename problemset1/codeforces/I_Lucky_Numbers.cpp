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
   int a;
   cin>>a;
   int f,s;
   f=a/10;
   s=a%10;
   if(s==0){
    cout<<"YES";
    return 0;
   }
   if(f%s==0||s%f==0){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }

    return 0;
}