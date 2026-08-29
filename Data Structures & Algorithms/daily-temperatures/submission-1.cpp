class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> result(temperatures.size());

        stack<int> indices;

        indices.push(0);

        for(int i=1;i < temperatures.size();++i){
            
            int curr_temp = temperatures[i];

            while(!indices.empty() && curr_temp > temperatures[indices.top()]){
                result[indices.top()] = i - indices.top();

                indices.pop();

            }
            indices.push(i);

        }

        return result;
    }
};
