class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if(nums.empty())  return{};
        int min_val = nums[0];
        int max_val = nums[0];
        std::unordered_set<int> num_set;

        for(int num : nums){
            if(num < min_val) min_val = num;
            if(num > max_val) max_val = num;
            num_set.insert(num);

        }

        std::vector<int> missing;

        for(int i= min_val ; i<= max_val; i++){
            if(num_set.find(i) == num_set.end()){
                missing.push_back(i);
            }
        }

       return missing; 
    }
};