class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fr = 0, ans = 0;
        for (int i = 0; i<nums.size(); i++){
            if(fr == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                fr++;
            }
            else{
                fr--;
            }
        }
        return ans;
    }
};