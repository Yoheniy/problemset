#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	bool a=false;
	for(int i=0;i<s.size();i++){
	    if(s[i]>=33&&s[i]<=126){
	    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
	    a=true;
	}
	}
	if(a){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	return 0;
}