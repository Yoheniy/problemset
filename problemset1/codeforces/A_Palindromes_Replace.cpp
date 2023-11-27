#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
#define REPE(i,a,b) for (int i = a; i <=b; i++)
#define REPS(i,a,b) for (int i = a; i >=b; i--)
const int N=1e3+10;
int hsh[N];
int ar[N][N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
   string s;
   cin>>s;
   REP(i,0,s.size()){
    int a=s.find('?');
    int r=s.size()-a-1;
    if(s[r]=='?'&&s[a]=='?'){
        s[r]='a';
        s[a]=s[r];
    }
    else{
    s[a]=s[r];
    }

   }
   string temp="";
   REPS(i,s.size()-1,0){
    temp+=s[i];

   }
   if(s==temp){
    cout<<s;
  }
  else{
    cout<<"-1";
  }
 
    return 0;
}