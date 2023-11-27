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
   long int a,b;
   cin>>a>>b;
   if(a%b==0||b%a==0){
    cout<<"Multiples";
   }
   else{
    cout<<"No Multiples";
   }
    return 0;
}