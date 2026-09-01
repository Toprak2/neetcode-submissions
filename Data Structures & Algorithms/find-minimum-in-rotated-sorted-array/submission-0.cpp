class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int left = 0;
        int right = nums.size() -1 ;


        while(left +1 != right){
            int middle = left + (right - left)/2;

            int val = nums[middle];

            if(val > nums[right]){
                left = middle;
            }
            else if(val < nums[right]){
                right = middle;
            }
            else{
                return val;
            }

        }
        
        return min(nums[left],nums[right]);

    }
};
