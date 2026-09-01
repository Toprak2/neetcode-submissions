class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){

            int middle = left + ( right - left)/2;

            cout << nums[left] << endl;
            cout << nums[right] << endl;
            cout << nums[middle] << endl;
            cout << "########" << endl;
            if(target == nums[middle]){
                return middle;
            }

            if(nums[middle] > nums[right]){
                //left side is ordered
                cout << "there" << endl;
                if(target < nums[middle] && target >=nums[left]){
                    right = middle -1;
                }
                else{
                    left = middle +1;
                }
            }
            else{
                
                //right or left can be ordered e.g if   m=4, l=2,r=7 in this= ...2,3,4,5,6,7
                
                if(nums[left]<= nums[middle]){
                                        cout << "theren't" << endl;
                    //left side is ordered
                    if(target < nums[middle] && target >=nums[left]){
                        //target is in the left side
                        right = middle-1;
                        
                    }
                    else{
                        left =middle +1;
                    }
                    
                }
                else{
                    cout<<"here"<<endl;
                    //right side is ordered
                    if(nums[middle]< target && target <= nums[right]){
                        //target is in the right signe
                        left = middle +1;
                    }
                    else{
                        right = middle -1;
                    }
                }
            }

        }
        return -1;
    }
};
