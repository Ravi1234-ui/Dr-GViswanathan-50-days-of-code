class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,n=s.size();
        int maxV=0,count=0;
        while(j<n){
            if(isvowel(s[j])) count++;
            if(j-i+1==k){
                maxV=max(maxV,count);
                if(isvowel(s[i])) count--;
                i++;
            }
            j++;
        }
        return maxV;
}
    bool isvowel(char ch){
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' ||ch=='u') return true;
        return false;
    }
};
