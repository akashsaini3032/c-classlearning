




#include <iostream>
using namespace std;
int main() {
    int ft=0;
    int st=1;
    int next=0;
    for(int i=0;i<5;++i)
    {
        if(i==0)
        {
            cout<<ft<<endl;
            continue;
        }
        
        if(i==1)
        {
        cout<<st<<endl;
        continue;
        }
    

    next=ft+st;
    ft=st;
    st=next;
    
    cout<<next<<endl;
} 
}
    
 