#include "../library.h"
void printPattern(int n)
{
    /*
     * STUDENT ANSWER
     */
    if (n <= 0)
    {
        cout << n;
        return;
    }
    else
    {
        cout << n << " ";
        printPattern(n - 5);
        cout << " " << n;
    }
}
int main()
{
    int a;
    cin >> a;
    printPattern(a);
    return 0;
}