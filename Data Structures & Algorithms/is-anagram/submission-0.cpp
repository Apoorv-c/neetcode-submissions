class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> mS;
        unordered_map<char,int> mT;
        for(int i = 0; i<s.length(); i++){
            mS[s[i]]++;
            mT[t[i]]++;
        }
        return mS == mT;
    }
};