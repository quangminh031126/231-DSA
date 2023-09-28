#include "../library.h"
bool consecutiveOnes(vector<int> &nums)
{
    // STUDENT ANSWER
    if (nums.size() == 0)
        return true;
    int countOnes = 0;
    int countCOnes = 0;
    int maxCOnes = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == 1)
        {
            countOnes++;
            countCOnes++;
        }
        else
        {
            maxCOnes = max(maxCOnes, countCOnes);
            countCOnes = 0;
        }
    }
    return countOnes == maxCOnes;
}
int main()
{
    vector<int> nums{0, 1, 1, 1, 9, 8};
    cout << consecutiveOnes(nums);
}