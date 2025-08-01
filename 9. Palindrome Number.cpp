class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string st="";
        for(int i=str.length()-1;i>=0;i--) {
            st+=str[i];
        }
        return str==st;
    }
};
