class Solution {
public:
    int minMoves(vector<int>& nums) {
        int val =* max_element(nums.begin(),nums.end());
        long long total_moves = 0;
        for(int num:nums){
            total_moves += (val - num);
        }
        return static_cast<int>(total_moves);

        
    }
};