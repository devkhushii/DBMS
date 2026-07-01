class Solution {
public:
    // bool isPalindrome(string s){
    //     int left=0;
    //     int right=s.length()-1;
    //     while(left<right){
    //         if(s[left]!=s[right]){
    //             return false;
    //         }
    //         left++;
    //         right--;
    //     }
    //     return true;
    // }
    // int countSubstrings(string s) {
    //     int c=s.length();

    //     for(int i=0;i<s.length();i++){
    //         for(int j=i+1;j<s.length();j++){
    //             if(isPalindrome(s.substr(i,j-i+1))){
    //                 c++;
    //             }
    //         }
    //     }
    //     return c;
    // }

    void expand(string &s,int left,int right,int &count){

        while(left>=0 && right<s.size() && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
    }
        int countSubstrings(string s){
            int count=0;

            for(int i=0;i<s.length();i++){

                expand(s,i,i,count);
                expand(s,i,i+1,count);
            }
            return count;
        }
    


};