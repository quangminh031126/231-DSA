#include "../library.h"
void findMaxHelper(int *arr, int &length, int &max, int index)
{
    if (index == length)
        return;
    if (max < arr[index])
        max = arr[index];
    findMaxHelper(arr, length, max, index + 1);
    return;
}
int findMax(int *arr, int length)
{
    /*
     * STUDENT ANSWER
     */
    int max = arr[0];
    findMaxHelper(arr, length, max, 1);
    return max;
}
int main()
{
    int arr[] = {10, 5, 7, 9, 15, 6, 11, 8, 12, 2};
    cout << findMax(arr, 10);
}