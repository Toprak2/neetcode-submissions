class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> remainders;

        for (int i = 0; i< nums.size(); i++){
            int remainder = target - nums[i];

            if(remainders.contains(remainder)){
                int min_i = min(i,remainders[remainder]);
                int max_i = max(i, remainders[remainder]);

                return {min_i,max_i};
            }

            remainders[nums[i]] = i;

        }

    }
};
