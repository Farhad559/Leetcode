class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        string st="";
        bool minpre=false;
        if(str[0]=='-') {
            for(int i=str.length()-1;i>=1;i--) {
                st+=str[i];
            }
            minpre=true;
        } else {
             for(int i=str.length()-1;i>=0;i--) {
                st+=str[i];
            }
        }
        long long num = stoll(st);

        if(minpre) num= -num;
        
        if (num < INT_MIN || num > INT_MAX) return 0;

        return (int)num;
    }
};
