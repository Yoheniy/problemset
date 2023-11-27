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
  string s;
  cin>>s;
  if(s.size()<26){
    cout<<"-1";
    return 0;
  }
  unordered_map<char,int>mp;
  for(auto &c:s){
    if(c=='?'){
        continue;
    }
    mp[c]++;
  }
  for(auto &c:s){
    if(c=='?'){
        continue;
    }
    if(mp[c]>1){
        cout<<"-1";
        return 0;
    }
  }
  vector<int>v(26,0);
  

 for(int i=0;i<s.size();i++){
    if(s[i]=='?'){

    }
 }


    return 0;
}