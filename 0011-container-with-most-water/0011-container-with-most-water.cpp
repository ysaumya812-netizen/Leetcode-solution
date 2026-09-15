class Solution {
public:
    long long int maxArea(vector<int>& height) {
        long long int max=0;
        long long int left=0,right=height.size()-1;
        while(left<right){
            long long int w=right-left;
            long long int l = min(height[left], height[right]);
            long long int a=w*l;
            if(a>max)  max=a;
            if(height[left]<height[right])  left++;
            else right--;
        }
        return max;
    }
};