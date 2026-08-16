class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1 && s.find(n)==s.end()){
            s.insert(n);
            n=getNext(n);
        }
         return n==1;
    }
    private:
    int getNext(int n){
        int totalSum =0;
        while(n>0){
            int digit = n %10;
            totalSum+=digit*digit;
            n/=10;
        }
        return totalSum;

        
    }
};