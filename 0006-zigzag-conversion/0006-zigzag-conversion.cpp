class Solution {
public:
    string convert(string s, int numRows) {
            if(numRows==1 || numRows>=s.size()){
                return s;
            }
            vector<string> rows(numRows);
            bool goingdown = true;
            int currentRow=0;
            for(auto ch:s){
                      rows[currentRow]+=ch;

                      if(currentRow==0){
                        goingdown=true;
                      }else if(currentRow==numRows-1){
                        goingdown=false;
                      }

                      if (goingdown){
                        currentRow++;
                      }else{
                        currentRow--;
                      }
            }
            string ans="";
            for(auto st:rows){
                ans+=st;
            }
            return ans;
    }
};