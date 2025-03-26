#include <iostream>
using namespace std;

//Target Sum

int main() {
    int arr[]={2,3,1,4,7};
    int sum=0;
    
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){

            sum=arr[i]+arr[j];
            if(sum==6)
            {
                cout<<arr[i]<<arr[j];
            }

        }
        
        
    }

    
 
}
