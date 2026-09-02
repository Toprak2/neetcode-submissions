class TimeMap {
public:

    unordered_map<string,vector<pair<int,string>>> mp;
    TimeMap() {
        

    }
    
    void set(string key, string value, int timestamp) {
        
        this->mp[key].push_back({timestamp,value});

    }
    
    string get(string key, int timestamp) {
        if(!mp.contains(key)){
            return "";
        }

        vector<pair<int,string>> &vec = mp[key];

        //binary search

        int left =0;
        int right = vec.size()-1;

        while(left<=right){

            int middle = left + (right - left)/2;

            if(vec[middle].first < timestamp){

                left = middle +1;

            }
            else if(vec[middle].first > timestamp){
                right = middle -1;
            }
            else{
                return vec[middle].second;
            }

        }


        if (right < 0) {
            return "";
        }

        return vec[right].second;


    }
};
