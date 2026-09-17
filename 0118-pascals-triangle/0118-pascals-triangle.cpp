class Solution {
public:
    vector<int>pt (int r){
        vector<int>ans;
        ans.push_back(1);
        int res=1;
        for(int i=1;i<r;i++){
            res=res*(r-i);
            res=res/i;
            ans.push_back(res);
        } 
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>fans;
        for(int i=1;i<=numRows;i++){
           
            fans.push_back(pt(i));
        }
        return fans;
    }
};