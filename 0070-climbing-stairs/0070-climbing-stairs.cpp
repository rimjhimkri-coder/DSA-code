class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int way2 = 1;
        int way1=2;
        int now = 0;
        for(int i=3; i<=n; i++){
            now = way1 +way2;
            way2 = way1;
            way1= now;
        }
        return now;
        
    }
};