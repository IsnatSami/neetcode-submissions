class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string word : strs) {
            int count[26] = {0};
            for (char c : word) {
                count[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + '#';
            }
            mp[key].push_back(word);
        }
        vector<vector<string>> results;
        for(auto anagrams: mp)
        {
            results.push_back(anagrams.second);
        }
        return results;
    }
};
