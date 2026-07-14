class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stac;
        for(char x : s){
            if(x=='('){
                stac.push(')');
            }
            else if(x=='{'){
                stac.push('}');
            }
            else if(x=='['){
                stac.push(']');
            }
            else{
                if(stac.empty() || x!=stac.top()){
                return false;
                }
                stac.pop();
            }    
        }
        return stac.empty();
    }
};
