class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<min) return nums[i];
        }
        return min;
    }
};