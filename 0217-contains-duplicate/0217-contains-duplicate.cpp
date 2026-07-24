class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < high;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
        
    }
};