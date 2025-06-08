class Solution {
public:
    bool rotateString(string s, string goal) {
        int len=s.size();
        if(s.size()!=goal.size()) return false;
        while(len--){
            char first=s[0];
            for(int i=1;i<s.size();i++) s[i-1]=s[i];
            s[s.size()-1]=first;
            if(s==goal) return true;
        }
        return false;
    }  
};
