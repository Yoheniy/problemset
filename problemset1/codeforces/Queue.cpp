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
int n;
cin>>n;
vector<int>v;
while(n--){
    int x;
    cin>>x;
    v.push_back(x);
}
vector<int>v1;

for(int i=v.size()-1;i>=0;i--){
    int j=i+1;
    int c=i;
    while(j<v.size()){
        if(v[i]>v[j]){
            c=j;
            j++;
        }
        else{ j++;}
       
    }

    v1.push_back(c-i-1);


}
for(auto it=v1.rbegin();it!=v1.rend();it++){
    cout<<*it<<" ";
}

    return 0;
}