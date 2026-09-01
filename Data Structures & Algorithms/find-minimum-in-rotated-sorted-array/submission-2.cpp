class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int left = 0;
        int right = nums.size() -1 ;


        while(left < right){
            int middle = left + (right - left)/2;

            int val = nums[middle];

            if(val > nums[right]){
                left = middle +1;
            }
            else if(val < nums[right]){
                right = middle;
            }

        }
        
        return nums[left];

    }
};
