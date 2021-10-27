#include<iostream>
#include<vector>

using namespace std;
class Solution {
    public:
        vector<int> sortColors(vector<int>& nums) {
            int n = nums.size();
            redo:
                for(int i=0;i<n;i++){
                    if(i+1 < n){
                        if(nums[i] > nums[i+1]){
                            int n1 = nums[i];
                            int n2 = nums[i+1];
                            nums[i] = n2;
                            nums[i+1] = n1;
                            goto redo;
                        }
                    } 
                }
        return nums;
        }
};

int main()
{
    Solution s;
    vector<int> v = {2,0,2,1,1,0};
    s.sortColors(v);
    return 0;
}