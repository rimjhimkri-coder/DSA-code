class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>count(26,0);
        int max_len =0;
        int last=0;
        for(int first=0; first<s.length(); ++first){
            count[s[first]-'a']++;
            while(count[s[first]-'a']>2){
                count[s[last]-'a']--;
                last++;
            }
            max_len=max(max_len,first-last+1);
        }
        return max_len;

        
    }
};