class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> remainders;

        for (int i = 0; i< nums.size(); i++){
            int remainder = target - nums[i];

            if(remainders.contains(remainder)){

                return {remainders[remainder],i};
            }

            remainders[nums[i]] = i;

        }

    }
};
