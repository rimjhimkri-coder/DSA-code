class Solution {
public:
    string toLowerCase(string s) {
        string t;
        for( char x:s){
            if(x>='A' && x<='Z'){
                t.push_back(x+32);
                }
                else{
                    t.push_back(x);
                }
        }
        return t;
        
    }
};