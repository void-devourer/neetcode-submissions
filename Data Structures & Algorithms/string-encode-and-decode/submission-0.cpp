class Solution {
public:

    string encode(vector<string>& strs) {
        string temp;
        for(const string& s : strs){
            temp.append(to_string(s.size()));
            temp.push_back('#');
            temp.append(s);
        }
        return temp;
    }

    vector<string> decode(string s) {
        vector<string> temp;
        int i=0; 
        while(i< s.size()){
            int j = i;
            while(s[j]!= '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            i = j+1;
            j = i + len;
            temp.push_back(s.substr(i, len));
            i = j;
        }
        return temp;
    }
};
