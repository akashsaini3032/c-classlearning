#include <iostream>
using namespace std;

//Find K largest in the given array

int main() {
    int arr[]={1,2,5,6,9,4};
    int num;
    
    for(int i=0;i<6;i++){

           for(int j=i+1;j<6;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                 arr[j]=temp;
            }
            
        
           }

        
    }

    cout<<"Enter the number:";
    cin>>num;

    cout<<"The"<<num<<"largest element is"<<arr[num-1];
    
    
}