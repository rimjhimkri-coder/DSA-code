class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> count(26,0);
        for(char c : s){
            count[c -'a']++ ;
            
        }
        string first_half="";
        char middle = 0;
        for(int i=0; i<26; i++){
            if(count[i] %2 !=0){
                middle= 'a' +i;
            }
            first_half += string(count[i]/2, 'a' + i);
        }
        string second_half =first_half;
        reverse( second_half.begin(), second_half.end());
        if(middle !=0){
            return first_half + middle + second_half;
        }
        return first_half + second_half;
    }

};