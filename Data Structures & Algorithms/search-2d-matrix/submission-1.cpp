class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> flattenedArray;
        for(int i=0; i<matrix.size();++i){
            for (int num: matrix[i]){
                flattenedArray.push_back(num);
            }
        }

        //binary search on array with len n*m -> O(logn*m) time complexity

        int left = 0;
        int right = flattenedArray.size() -1;

        

        while(left <= right){
            int middle = left + (right - left)/2;

            if(flattenedArray[middle] == target){
                return true;
            }
            if(flattenedArray[middle] < target){
                
                left = middle + 1;
            }
            else{
                right = middle -1;
            }

        }

        return false;
    }
};
