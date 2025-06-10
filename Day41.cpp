class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        sort(strs.begin(),strs.end());
        string s1=strs[0],s2=strs[strs.size()-1];
        string res="";
        int x=0,y=0;
        while(x<s1.size() && y<s2.size()){
            if(s1[x]==s2[y]){
                res+=s1[x];
                x++;
                y++;
            }else{
                break;
            }
        }
        return res;
    }
};
