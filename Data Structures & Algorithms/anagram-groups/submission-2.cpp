class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        
        for(auto str:strs){
            vector<int> count(26,0);
            for(auto ch:str){
                count[ch - 'a'] += 1;
            }
            string key = "";
            for(auto c:count){
                key += to_string(c) + "#";
            }
            groups[key].push_back(str);
        }
        vector<vector<string>> results;
        for(auto [key,list]:groups){
            results.push_back(list);
        }
        return results;
    }
};
