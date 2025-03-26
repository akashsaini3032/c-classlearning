#include <iostream>
using namespace std;

int main() 
{
    // the frequency of an element in an array?
    int arr[]={2,1,2,1,3,1,2};
    for(int i=0;i<7;i++){
        if(arr[i]!=-1) {
            int count=1;
            for(int j=i+1;j<7;j++){
                if(arr[i]==arr[j]) {
                    ++count;
                    arr[j]=-1;
                }
            }
            
            cout<<arr[i]<<"="<<count<<endl;
        }
    }
    
}





