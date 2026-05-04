class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> groups;
        
        for(auto str:strs){
            vector<int> count(26,0);
            for(auto ch:str){
                count[ch - 'a'] += 1;
            }
            groups[count].push_back(str);
        }
        vector<vector<string>> results;
        for(auto [key,list]:groups){
            results.push_back(list);
        }
        return results;
    }
};
