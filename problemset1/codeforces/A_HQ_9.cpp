#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef
 
pair<int,int> pi;
#define PB push_back

#define MP make_pair

#define REP(i,a,b) for (int i = a; i <=b; i++)

const
 
int N=1e3+10;
int hsh[N];
int ar[N][N];
int
 
main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin>>s;
  
  for(int i=0;i<s.size();i++){
    
    if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+'){
      
      cout<<"YES";
      return 0;
    }
    else{
        continue;
    }
  }
  
cout<<"NO";
  return 0;
}