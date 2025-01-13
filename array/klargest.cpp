#include <iostream>
using namespace std;

//Find K largest in the given array

int main() {
    int arr[]={2,1,6,3,7};
    int num;
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++)
        if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    cout<<"Enter the number:";
    cin>>num;

    cout<<"The"<<num<<"largest element is"<<arr[num-1];
    
    
}