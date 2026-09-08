class Solution {
public:
    string toHex(int num) {
        if(num == 0){
            return "0";
        }
        string hex_chars = "0123456789abcdef";
        string result = "";
        unsigned int u_num = num;
        while(u_num >0){
            int remainder = u_num & 0xF;
            result += hex_chars[remainder];
            u_num >>=4;
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};