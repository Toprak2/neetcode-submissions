class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for(const string& token : tokens){
            
            
            if(token.length() == 1 && !isalnum(token[0])){
                int num2 = stoi(st.top());
                st.pop();

                int num1 = stoi(st.top());
                st.pop();

                if(token == "+"){
                
                st.push(to_string(num1 + num2));
                }
                else if(token == "-"){

                    st.push(to_string(num1 - num2));
                }
                else if(token == "/"){

                    st.push(to_string(num1 / num2));
                }
                else if(token == "*"){

                    st.push(to_string(num1 * num2));
                }
            }
            else{
                st.push(token);
            }
        }

        return stoi(st.top());
    }
};
