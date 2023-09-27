#include "../library.h"
void printArray(int n)
{
    if (n < 0)
        return;
    if (n == 0)
    {
        cout << 0;
        return;
    }
    printArray(n - 1);
    cout << ", " << n;
}

int main()
{
    int n = 10; // Change this value to test with different inputs
    printArray(n);
    return 0;
}