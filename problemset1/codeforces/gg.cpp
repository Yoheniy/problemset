
string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>v(s.size(),0);

        for(int i=0;i<shifts.size();i++){
                if(shifts[i][2]==0){
                    v[shifts[i][0]]+=-1;
                    v[(shifts[i][1])+1]+=1;
                }
                else{
                    v[shifts[i][0]]+=1;
                    v[(shifts[i][1])+1]-=1;
                }
        }
        string temp="";
        for(int i=0;i<s.size();i++){
            int t=(int)s[i];
            t+=v[i];
            if(t>122){
                t=97+122-t-1;
            }
            if(t<97){
                t=122-97-t+1;
            }
            temp+=(char)t;
        }
        return temp;
    }
};