class Solution {
public:
    int findComplement(int num) {
        unsigned int marks = ~0;
        while(num & marks){
            marks <<= 1;
        }
        return ~marks ^ num;
        
    }
};