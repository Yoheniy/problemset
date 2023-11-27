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
    vector<char>v;
    n++;
    while(n--){
        string s;
        cin>>s;
        string temp="";
        int i=0;
        int d=s.size();
        while(i<d){
            int j=i+1;
            if(j==d){
                v.push_back(s[i]);
                temp+=s[i];
                break;
            }
            if(s[i]!=s[j]){
                temp+=s[i];
                v.push_back(s[i]);
            }
            else{
                i+=2;
                continue;
            }


        }
        sort(v.begin(),v.end());
        string h="";
        int r=v.size();
        for(int i=0;i<r;i++){
            h+=v[i];
        }
        
        cout<<h<<endl;
        h="";
        v.clear();
    }
    
    return 0;
}
