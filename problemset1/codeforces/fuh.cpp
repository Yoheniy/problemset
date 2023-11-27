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


string shiftingLetters(string s, vector<vector<int>>& shifts) {
        map<int,char>m;
        vector<int>v(s.size()+1,0);
         vector<int>pf(s.size(),0);


        char a='a';
        for(int i=0;i<26;i++){
            m[i]=a;
            a++;
        }
        for(int i=0;i<shifts.size();i++){
                if(shifts[i][2]==0){
                    v[shifts[i][0]]-=1;
                    v[(shifts[i][1])+1]+=1;
                }
                else{
                    v[shifts[i][0]]+=1;
                    v[(shifts[i][1])+1]-=1;
                }

        }
    string temp="";
    pf[0]=v[0];
    for(int i=1;i<pf.size();i++){
    pf[i]=pf[i-1]+v[i];
        
    }
    for(int i=0;i<s.size();i++){
        int h=i;
        h+=pf[i];
        if(h>25){
            h%=25;
            h--;

        }
        if(h<0){
            h%=25;
            h+=26;
        }
      
        temp+=m[h];
    }
    
        return temp;
    }


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s="";
     vector<vector<int>>shifts={{0,1,0},{1,2,1},{0,2,1}};
     cout<<shiftingLetters(s,shifts);
  
    return 0;
}