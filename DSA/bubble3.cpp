


 #include <iostream>
using namespace std;

void bubbleSort(int arr[], int s)
{
    int tmp, c = 0;
    bool d;

    for (int i = 0; i < s - 1; i++)
    {
        d = false;
        for (int j = 0; j < s - i - 1; j++) 
        {
            c++;
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                d = true;
            }
        }

        if (d == false)
        {
            break;
        }
    }

    cout << "\nCounter hits = " << c << "\n";
    
    
    cout << "Sorted Array: ";
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 1, 3, 4, 5};
    bubbleSort(arr, 5);
    return 0;
}
