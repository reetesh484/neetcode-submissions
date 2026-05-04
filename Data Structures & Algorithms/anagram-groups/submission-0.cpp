class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        for(auto str:strs){
            string key = str;
            sort(key.begin(),key.end());
            groups[key].push_back(str);
        }
        vector<vector<string>> results;
        for(auto [key,list]:groups){
            results.push_back(list);
        }
        return results;
    }
};
