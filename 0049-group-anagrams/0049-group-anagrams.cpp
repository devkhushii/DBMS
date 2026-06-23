class Solution {
public:
    bool isAnagram(string s,string t){
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;

        for(auto st:strs){
            string s=st;
            sort(s.begin(),s.end());
            if(isAnagram(s,st)){
                mp[s].push_back(st);
            }
        }
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};