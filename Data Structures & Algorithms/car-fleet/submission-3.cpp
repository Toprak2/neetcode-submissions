class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<float,float>> cars;
        for(int i=0; i<position.size(); ++i){
            cars.push_back({position[i],speed[i]});
        }

        sort(cars.begin(),cars.end());
        
        int groups = 0;
        
        for(int i=cars.size()-1; i>=0; --i){
            float furthest_car_speed = cars[i].second;
            float furthest_car_pos = cars[i].first;
            float curr_it = 0;
            while(i>=1 && cars[i-1].second > furthest_car_speed && (furthest_car_pos-cars[i-1].first)/(cars[i-1].second - furthest_car_speed) <= (target-furthest_car_pos)/furthest_car_speed){
                
                i--;
                curr_it++;
            }
            groups++;
        }

        return groups;
    }
};
