class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> groups;

        unordered_map<string,int> anagrams;
        
        int group_place=1;

        for (string str : strs){
            
            int freqs[26] = {};

            for (char ch : str){
                freqs[ch - 'a']++;
            }
            string key = "";

            for (int i{0};i< size(freqs);i++){
                if (freqs[i]!=0){
                    key += to_string(i) + to_string(freqs[i]) + "#";
                }    
            }


            if (anagrams[key]==0){
                anagrams[key] = group_place;
                vector<string> s;
                groups.push_back(s);
                groups.back().push_back(str);
                group_place++;
            }
            else{
                groups[anagrams[key]-1].push_back(str);
            }


        }

        return groups;
    }
};
