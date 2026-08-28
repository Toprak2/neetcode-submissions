class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //brute force

        vector<vector<int>> triplets;

        sort(nums.begin(),nums.end());

        int n = nums.size();


        int curr = 0;

        while(curr < n-2){

            int i=curr+1,j= n-1;

            int target = 0 - nums[curr];
            //cout << target << endl;
            while(i < j){
                if(nums[i] + nums[j] > target){
                    j--;
                    continue;
                }
                if(nums[i] + nums[j] < target){
                    i++;
                    continue;
                }

                if(nums[i] + nums[j] == target){
                    int small = nums[i];
                    int big = nums[j];
                    triplets.push_back(vector<int>{nums[curr],small,big});

                    while(nums[i]==small && i<j){
                        i++;
                    }
                    
                }

            }
            
            while(nums[curr] == -target && curr < n-2){
                curr++;
            }
            
        }
        return triplets;
    }
};
