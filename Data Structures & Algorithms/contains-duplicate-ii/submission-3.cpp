class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {


        int i=0, j = 0;
        int n = nums.size() -1;

        if( n == 0 || k ==0){
            return false;
        }

        while(i < n){
            for(int l = 0; l<k && j<n;l++){
                j++;
                if(nums[i] == nums[j]){
                    return true;
                }
            }
            i++;
            j=i;
        }
        return false;
    }
};