class Solution {
public:
    bool isMonotonic(vector<int>& nums) { //array is said to be monotonic in nature if it is either continuously increasing or continuously decreasing.
        bool increase = true;
        bool decrease = true;
        for(int i = 0; i < nums.size () - 1; i++) {
            if(nums[i] > nums[i+1]) increase = false;
            if(nums[i] < nums[i+1]) decrease = false;
            if(increase == false && decrease == false) return false;
        }
        return true;
    }
};
