#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,1,3,4};
    int k=0;
    for(int i=0;i<5;++i)
    {
        for(int j=i+1;i<5;++i)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
        }
    }
    
    for(int i=0;i<5;++i)
    {
        if(arr[i]!=-1)
        {
            arr[k]=arr[i];
            cout<<arr[k];
        }
        
        
    }
    return 0;
}