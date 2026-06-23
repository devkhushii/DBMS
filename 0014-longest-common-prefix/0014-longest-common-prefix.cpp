class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str=strs[0];
        for(int i=1;i<strs.size();i++){
        int l = min(str.length(), strs[i].length());

        int j = 0;

        while(j < l && str[j] == strs[i][j]){
            j++;
        }

        str = str.substr(0, j);
        
        if(str.empty()){
            return "";
        }
        }
        return str;
    }
    
};