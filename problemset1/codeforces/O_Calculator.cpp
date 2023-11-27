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
if(s.find('+')!=s.npos){
    int va=s.find('+');
    int n=stoi(s.substr(0,va));
    int m=stoi(s.substr(va+1));
    cout<<n+m;

 }
else if(s.find('*')!=s.npos){
    int va=s.find('*');
    int n=stoi(s.substr(0,va));
 
    int m=stoi(s.substr(va+1));
    
    cout<<n*m;

 }
else if(s.find('-')!=s.npos){
    int va=s.find('-');
    int n=stoi(s.substr(0,va));
    int m=stoi(s.substr(va+1));
    cout<<n-m;

 }
 else if(s.find('/')!=s.npos){
    int va=s.find('/');
    int n=stoi(s.substr(0,va));
    int m=stoi(s.substr(va+1));
    cout<<n/m;

 }
 else{
    return 0;
 }
    return 0;
}