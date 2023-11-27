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
   double x,y;
   cin>>x>>y;
   if(x>0&&y>0){
    cout<<"Q1";
   }
   else if(x>0&&y<0){
   cout<<"Q4";
   }
   else if(x<0&&y<0){
   cout<<"Q3";
   }
   else if(x<0&&y>0){
   cout<<"Q2";
   }
   else if(x==(double)0&&y>0||y<0){
    cout<<"Eixo Y";
   }
    else if(y==(double)0&&x>0||x<0){
    cout<<"Eixo X";
   }
   else if(x==(double)0&&y==(double)0){
    cout<<"Origem";
   }
   else{
    return 0;
   }   return 0;
}