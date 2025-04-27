#include<iostream>
#include<climits>  // Uncommented to use INT_MAX and INT_MIN
using namespace std;

int getmin(int num[], int n)
{
    int min = INT_MAX; // or num[0] if you want to initialize with the first element
    for(int i = 0; i < n; i++)
    {
        if(num[i] < min)  // Corrected condition to find the minimum value
        {
            min = num[i];
        }
    }
    return min;
}

int getmax(int num[], int n)
{
    int max = INT_MIN; // or num[0] if you want to initialize with the first element
    for(int i = 0; i < n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;  // Correct input for size of array

    int num[100];  // Assuming array size won't exceed 100 elements

    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> num[i];  // Reading array elements
    }

    cout << "Maximum value: " << getmax(num, size) << endl;  // Output max value
    cout << "Minimum value: " << getmin(num, size) << endl;  // Output min value

    return 0;
}
