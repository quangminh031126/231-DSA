#include "../library.h"
int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << findGCD(a, b);
}