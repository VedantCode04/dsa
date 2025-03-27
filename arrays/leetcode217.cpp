// contains duplicate ? return true else false
// easy

// approach 1: using unordered set
// o(n) space and time

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        if(size == 0 || size == 1) return false;

        unordered_set<int> Set;

        for(auto val: nums){
            if(Set.find(val) == 0){
                Set.insert(val);
            } else {
                return true;
            }
        }

        return false;
    }
};

// approach 2: sort
// o(nlogn) time, space = o(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        if(size == 0 || size == 1) return false;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < size; i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }

        return false;
    }
};