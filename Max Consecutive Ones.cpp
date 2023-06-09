class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int size=nums.size(), count=0, maxCount=0, i;
    for (i = 0; i < size; ++i) {
        if (nums[i] == 1) {
            ++count;        
        } else {
            count = 0;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    return maxCount;
}
};
