#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int circularsubarray(vector<int>& nums){

    int totalSum = nums[0];

    int currMax = nums[0];
    int maxSum = nums[0];

    int currMin = nums[0];
    int minSum = nums[0];

    for(int i = 1; i < nums.size(); i++){

        totalSum += nums[i];

        currMax = max(nums[i], currMax + nums[i]);
        maxSum = max(maxSum, currMax);

        currMin = min(nums[i], currMin + nums[i]);
        minSum = min(minSum, currMin);
    }

    if(maxSum < 0)
        return maxSum;

    return max(maxSum, totalSum - minSum);
}
int main(){ 
    vector<int> nums = {5,-3,5}; 
    cout<<"Printing hello"<<endl; 
    cout<<circularsubarray(nums); 
    return 0; }