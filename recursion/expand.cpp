#include "../library.h"
void appendLoop(string s, string &toBeAppended, int timesleft)
{
    if (timesleft == 0)
        return;
    s.append(toBeAppended);
    appendLoop(s, toBeAppended, timesleft - 1);
}
void expandHelper(string &s, string &toBeAppended, int idx, string expanded, int timesleft)
{
    if (idx >= s.length())
        return;
    if (s[idx] == '(')
    {
    }
    if (isdigit(s[idx]))
    {
    }
    if (s[idx] == ')')
    {
    }
    toBeAppended += s[idx];
}
string expand(string s)
{
}
int main()
{
    string a;
    getline(cin, a);
    cout << expand(a);
    return 0;
}