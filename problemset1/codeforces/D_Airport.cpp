#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
const int N=1e3+10;
int hsh[N];
int ar[N][N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
  int a,b;
  cin>>a>>b;
  multiset<int>v;
  multiset<int>v1;
 while(b--){
    int c;
    cin>>c;
    v.insert(c);
    v1.insert(c);
 }
 int mn;
while(a--){
auto h=((v1.begin()));
mn+=*(v.begin());
erase(h);
auto e=*(v.begin());


e--;
v.insert(e);

}
int ma;
while(a--){
auto h=*(--(v1.end()));
ma+=h;
erase(v1.end());
h--;
v1.insert(h);
}
cout<<mn<<" "<<ma;
    return 0;
}