class Solution {
public:
    int countSegments(string s) {
        int n=s.size();
        if(n<1) return 0;
        int len=0;
        for(int i=0;i<n;i++){
            if(s[i] !=' '){
                while(i<n && s[i] != ' ') i++;
                len++;
            }
        }
        return len;
    }
};
