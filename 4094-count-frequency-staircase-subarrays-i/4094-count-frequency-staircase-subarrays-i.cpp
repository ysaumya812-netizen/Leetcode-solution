class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n= nums.size();
        int tcount=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>freq;
            vector<int>order;
            for(int j=i;j<n;j++){
                int val= nums[j];
                if(freq[val]==0){
                    order.push_back(val);
                }
                freq[val]++;
                bool isValid = true;
                for(int k=0; k<order.size();k++){
                  if(freq[order[k]]!=k+1){
                     isValid= false;
                     break;
                }
            }
            if(isValid){
                tcount++;
            }
            }
            
        }
        return tcount;
    }
};