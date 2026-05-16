class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        for(char c : s){
            if(isalnum(c)){
                x += tolower(c);
            }
        }
        return x == string(x.rbegin(),x.rend());
    }
};
