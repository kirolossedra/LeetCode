class Solution {
public:
    string toLowerCase(string s) {
        string t ="";
        for(auto itr : s)
            t+= tolower(itr);
        return t;
    }
};