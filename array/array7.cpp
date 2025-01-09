#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5 };
    int max=arr[0];

    for(int i=0;i<=4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
}