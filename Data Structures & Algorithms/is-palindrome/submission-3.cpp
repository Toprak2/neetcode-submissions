class Solution {
public:
    bool isPalindrome(string s) {



        int i = 0, j = s.length()-1;

        while(i<j){
            while(!isalnum(s[i]) && i < s.length()-1){
                i++;
            }
            while(!isalnum(s[j]) && j >= 0){
                j--;
            }
            
            if(i>=j){
                break;
            }

            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
                continue;
            }
            
            return false;


        }
        return true;
    }
};
