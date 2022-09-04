/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    // int myAtoi(string s) {
    //     int pos = true;
    //     int i=0;
    //     while(s[i]==' ') i++;
    //     if(s[i]=='-'){
    //         pos = false;
    //         i++;
    //     }
    //     else if(s[i]=='+'){
    //         pos = true;
    //         i++;
    //     }
    //     string num = "";
    //     while(s[i]=='0') i++;
    //     while(s[i]<='9' && s[i]>='0'){
    //         num.push_back(s[i]);
    //         i++;
    //     }
    //     if(num.size()>9){
    //         if(pos) return INT_MAX;
    //         else return INT_MIN;
    //     }
    //     int ans = 0;
    //     reverse(num.begin(),num.end());
    //     int place = 1;
    //     for(int j=0; j<num.length(); j++){
    //         ans+=place*(num[j]-'0');
    //         place*=10;
    //     }
    //     return pos?ans:-ans;
    // }

    int myAtoi(string str) {
        if(str.length()==0) return 0;
        long result = 0;
        int indicator = 1;
        int i=0;
        while(i<str.length() && str[i]==' ') i++;
        if(i<str.length() && str[i] == '-' || str[i] == '+')
            indicator = (str[i++] == '-')? -1 : 1;
        while(i<str.length() && '0'<= str[i] && str[i] <= '9') 
        {
            result = result*10 + (str[i++]-'0');
            if(result*indicator >= INT_MAX) return INT_MAX;
            if(result*indicator <= INT_MIN) return INT_MIN;                
        }
        return result*indicator;
    }
};
// @lc code=end

