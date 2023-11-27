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
   double x;
   cin>>x;
   if(x>0&&x<=(double)25){
    cout<<"Interval [0,25]";
   }
    else if(x>25&&x<=(double)50){
    cout<<"Interval (25,50]";
   }
    else if(x>50&&x<=(double)75){
    cout<<"Interval (50,75]";
   }
    else if(x>75&&x<=(double)100){
    cout<<"Interval (75,100]";
   }

   else{
    cout<<"Out of Intervals";
   }
   
   
   
    return 0;
}