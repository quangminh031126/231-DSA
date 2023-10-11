#include "../library.h"
int longestSublist(vector<string> &words)
{
    // STUDENT ANSWER
    if (words.empty())
    {
        return 0;
    }
    int maxLen = 1;
    int currentLen = 1;
    for (int i = 1; i < words.size(); ++i)
    {
        if (!words[i].empty() && !words[i - 1].empty() && words[i][0] == words[i - 1][0])
        {
            ++currentLen;
        }
        else
        {
            maxLen = max(maxLen, currentLen);
            currentLen = 1;
        }
    }
    maxLen = max(maxLen, currentLen); // Check for the last subarray
    return maxLen;
}
int main()
{
    vector<string> words{"faction", "fight", "and", "are", "attitude"};
    cout << longestSublist(words);
}