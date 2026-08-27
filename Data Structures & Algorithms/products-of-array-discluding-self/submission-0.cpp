class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       // [1,1,2,8]
       // [48,24,6,1]
        vector<int> pre(nums.size()),post(nums.size()), final(nums.size());

        for(int i{0};i<nums.size();++i){
            if( i == 0){
                pre[i]=1;
                continue;
            }

            pre[i]=(pre[i-1] * nums[i-1]);
        }   

        for(int i = nums.size()-1;i>=0;--i){
            if (i == nums.size()-1){
                post[i]=1;
                continue;
            }

            post[i]= post[i+1] * nums[i + 1];
        }

        for(int i{0};i<final.size();++i){
            final[i] = pre[i] * post [i];
        }
        
        return final;
        
    }
};
