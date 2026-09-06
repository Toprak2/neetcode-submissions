class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> st;

        int l =0;
        int r=0;

        while(r<=nums.size()-1){
            

            if(r-l > k){
                st.erase(nums[l]);
                l++;
            }

            if(st.contains(nums[r])){
                return true;
            }

            st.insert(nums[r]);

            r++;

        }
        return false;
    }
};