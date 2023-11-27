//4022146   Jul 4, 2013 8:34:23 PM	fuwutu	 271A - Beautiful Year	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    y+=1;
    while (true)
    {
        string s=to_string(y);
        int f=0;
        for(int i=0;i<s.size();i++){
            if(i+1){
           if(s[i]!=s[i+1]){
            f=1;
            break;
           }
        }
         if(f==1){
            break;
        }
       
        }
         if(f==1){
            break;
        }
         y+=1;

    }
    cout << y << endl;
    return 0;
}