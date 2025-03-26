// majority element
// easy : moore's voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int count = 0, curr;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                curr = nums[i];
            }
            if(nums[i] == curr){
                count++;
            } else {
                count--;
            }
        }

        return curr;
    }
};