#include <iostream>
using namespace std;

//find min value


int main() {
    int arr[]={1,2,3,4,5 };
    int min=arr[0];

    for(int i=0;i<=4;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<min;
}