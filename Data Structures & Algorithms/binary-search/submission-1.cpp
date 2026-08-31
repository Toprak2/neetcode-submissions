class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size()-1;

        if(end == 0){
            if (nums[0] == target)
                return 0;
            return -1;
        }

        while(start != end ){

            int middle = (end - start)/2;

            if (middle == 0){
                if(nums[start]==target){
                    return start;
                }
                else if(nums[end]==target){
                    return end;
                }
                return -1;
            }

            if(nums[start + middle] == target){
                return start + middle;
            }
            else if(nums[start + middle] > target){
                end = start + middle;
            }
            else{
                start = start + middle;
            }

        }
        return -1;

    }
};
