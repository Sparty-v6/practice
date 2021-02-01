#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums;
    int target;
    int num;
    int size;
    cin>>size;
    for(int i =0; i<size; i++){
        cin>>num;
        nums.emplace_back(num);
    }
    cin>>target;
    s.twoSum(nums,target);
    return 0;
}