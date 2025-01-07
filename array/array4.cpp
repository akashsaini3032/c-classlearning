#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i=0;i<=4;i++){
        
        cin>>arr[i];
    }
    
    for(int i=0;i<=4;i++) {
        arr[i]=arr[i]+5;
        cout<<arr[i];
    }
    
    
    
   
}