class Solution {
public:
    int reverseDegree(string s) {
        int total_sum = 0;
        for(int i=0;i< s.length();i++){
            int reversed_alpha = 26-(s[i]-'a');
            int string = i+1;
            total_sum += reversed_alpha*string;
        }
        return total_sum;
        
    }
};