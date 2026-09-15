class Solution {
public:
    bool having(vector<int>v,int x){
        for(int k=0;k<v.size();k++){
            if(v[k]==x){
                return 1;
            }
        }
        return 0;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            int e1=nums1[i];
            for(int j=0;j<nums2.size();j++){
                int e2=nums2[j];
                if(e1==e2 && ! having(v,e1)){
                    v.push_back(nums1[i]);
                }
            }
        }
        return v;
    }
};