class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[j] == nums[i]) return nums[i];
            }
        }
        return -1;
    }
};
