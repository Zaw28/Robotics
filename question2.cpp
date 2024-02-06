#include <iostream>
#include <climits>
int main()
{
    int arr[] = {4,6,39,73,2,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int minValue;
    int maxValue;

    for (int i=0; i<size; ++i)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }

    }
    std::cout << "Minimum value" << minValue << std::endl;
    std::cout << "Maximum value" << maxValue << std::endl;

    return 0;
}