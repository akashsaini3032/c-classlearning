#include <iostream>
using namespace std;

//Remove duplicate
int main() {
    int arr[]={2,1,2,1,3,4};
    
    for(int i=0;i<6;i++){
        
        for(int j=i+1;j<6;j++){
            if(arr[i]==arr[j]){
            arr[j]=-1;

        }
        }
        
    }

    for(int i=0;i<6;i++){
        if(arr[i]!=-1){
            cout<<arr[i]<<'\t';
        }
    }
    return 0;
 
}

// 

#include <iostream>
using namespace std;
int dup=0;

int main() {
    int arr[]={1,2,1,2,3,3,2,1,2,5};
    for(int i=0;i<10;++i)
    {
        bool dup=false;
        for(int j=i+1;j<10;++j)
        if(arr[i]==arr[j])
        {
            arr[j]=-1;
            dup=true;
        }
    }
    if(dup&& arr[i]!=-1)
    cout<<arr[i];
    
    
 
}

// for not

#include <iostream>
using namespace std;
int dup=0;

int main() {
    int arr[]={1,2,1,2,3,3,2,1,2,5};
    for(int i=0;i<10;++i)
    {
        bool dup=false;
        for(int j=i+1;j<10;++j)
        if(arr[i]==arr[j])
        {
            arr[j]=-1;
            dup=true;
        }
    }
    if( !dup&& arr[i]!=-1)
    cout<<arr[i];
    
    
 
}