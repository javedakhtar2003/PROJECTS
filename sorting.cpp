#include <iostream>
using namespace std;
int main()
{
    int array[100], n;
    cout << "enter the number of elements of array : ";
    cin >> n;
    cout << "ente the number in array : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    cout << "elements of array is : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl
         << "after sortting elments of array : " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (array[i] > array[j])
            {
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << array[i] << "\t";
    }
}