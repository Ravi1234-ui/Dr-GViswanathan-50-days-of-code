class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &i:image){
            reverse(i.begin(),i.end());
            for(int &j:i){
                j=1-j;
            }
        }
        return image;
    }
};
