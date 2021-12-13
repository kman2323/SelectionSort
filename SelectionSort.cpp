#include <iostream>
using namespace std;


// space complexity : o(1)
// n(n-1)/2 = 
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
void selectSort(int* arr, int size)
{

    int count=0;

    for(int i = 0; i < size; i++)
    {
        int min = arr[i];

        for(int j = i+1; j < size; j++)
        {
            if(min < arr[j])
            {
                swap(min,arr[j]);

            }
            count++;
        }
        cout << "count = " << count << endl;
    }
}

int main()
{
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    selectSort(arr,10);
    for(int i = 0; i < 10; i++)
    {
        cout << " arr[i] = " << arr[i] << endl;
    }
}