#include "../library.h"
int equalSumIndex(vector<int> &nums)
{
    int totalSum{0};
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        totalSum += nums[i];
    }
    int leftSum = 0;
    for (i = 0; i < nums.size(); i++)
    {
        totalSum -= nums[i];
        if (leftSum == totalSum)
            return i;
        leftSum += nums[i];
    }
    return -1;
}
int main()
{
    vector<int> nums{3, 5, 2, 7, 6, 4};
    cout << equalSumIndex(nums);
}