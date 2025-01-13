#include <iostream>
using namespace std;

//Target Sum

int main() {
    int arr[]={2,3,1,4,7};
    int sum;
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
            arr[j]=-1;

        }
        }
        
    }

    
 
}
