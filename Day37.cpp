class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string &a:words){
            if(ispalindrome(a)) return a;
        }
        return "";
    }
    bool ispalindrome(string s){
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;    j--;
        }
        return true;
    }
};
