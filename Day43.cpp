class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size()) return s;
        vector<string> rows(numRows);
        int row=0;
        bool goingdown=false;
        for(char c: s){
            rows[row]+=c;
            if(row==0 || row==numRows-1) goingdown=!goingdown;
            if(goingdown) row++; else row--;
        }
        string res;
        for(string &r:rows) res+=r;
        return res;
    }
};
