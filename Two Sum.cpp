class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
for(int i=0;i<=nums.size()-1;i++){
for(int j=i+1;j<=nums.size()-1;j++){
if(nums.at(i)+nums.at(j)==target && i!=j)
return {i,j};
}



        }
return {};
    }
};