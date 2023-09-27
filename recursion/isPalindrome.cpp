#include "../library.h"
bool isPalindromeHelper(string &str, int start, int end)
{
    while (str[start] == ' ')
    {
        start++;
    }
    while (str[end] == ' ')
    {
        end--;
    }
    if (start >= end)
        return true;
    if (str[start] == str[end])
        return isPalindromeHelper(str, start + 1, end - 1);
    return false;
}
bool isPalindrome(string str)
{
    return isPalindromeHelper(str, 0, str.length() - 1);
}
int main()
{
    string a;
    getline(cin, a);
    cout << isPalindrome(a);
    return 0;
}