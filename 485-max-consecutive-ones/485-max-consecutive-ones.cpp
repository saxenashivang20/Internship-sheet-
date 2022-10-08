class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int size = 0;
        int max_size = 0;
        for(int num : nums)
        {
            if(num == 0)
            {
                max_size = max(max_size , size);
                size = 0; 
            }
            else
                size++;}
        return max(max_size , size);
    }
};