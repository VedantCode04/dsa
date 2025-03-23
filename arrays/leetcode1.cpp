// two sum
// easy : using map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> cache;

        for(int i = 0; i < nums.size(); i++){
            int remaining = target  - nums[i];
            if(cache.find(remaining) != 0){
                return {cache[remaining], i};
            }
            cache[nums[i]] = i;
        }

        return {-1, -1};
    }
};