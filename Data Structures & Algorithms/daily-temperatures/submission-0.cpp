class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> result(temperatures.size());

        stack<int> temps,indices;

        temps.push(temperatures[0]);
        indices.push(0);

        for(int i=1;i < temperatures.size();++i){
            
            int curr_temp = temperatures[i];

            while(!temps.empty() && curr_temp > temps.top()){
                result[indices.top()] = i - indices.top();

                indices.pop();
                temps.pop();

            }

            temps.push(curr_temp);
            indices.push(i);

        }

        return result;
    }
};
