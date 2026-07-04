class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
unordered_map<char, int> count;
for (int i = 0; i < s.length(); i++) {
    count[s[i]]++; // Add for string s
    count[t[i]]--; // Subtract for string t
}

// If they are anagrams, every value in the map will be 0
for (auto &pair : count) {
    if (pair.second != 0) return false;
}
return true;
        }
};
