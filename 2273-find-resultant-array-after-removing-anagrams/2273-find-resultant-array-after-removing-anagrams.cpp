class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
    vector <string> result;
        
        
        if(words.empty() or words.size() ==1)
            return words;
        
        
        result.push_back(words[0]);
        
        for(int i=1; i<words.size(); i++ ){
            
            if(isAnagram(words[i],words[i-1])){
                
            } else{
                result.push_back(words[i]);
            }
        }
        
       
        return result;
    }
    


bool isAnagram(const std::string& w1, const std::string& w2) {
    if (w1.size() != w2.size()) {
        return false;
    }

    std::unordered_map<char, int> charCount;

    for (char c : w1) {
        ++charCount[c];
    }

    for (char c : w2) {
        if (--charCount[c] < 0) {
            return false;
        }
    }

    return true;
}

};