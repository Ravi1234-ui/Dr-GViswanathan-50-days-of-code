class Solution {
public:
    string convertToTitle(int col) {
        string s="";
        while(col){
            char a= (col - 1)%26 + 'A';
            s=a+s;
            col=(col-1)/26;
        }
        return s;
    }
};
