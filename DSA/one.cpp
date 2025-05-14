
#include<iostream>
using namespace std;

void show (int &a, int &b)
(
    a=a+10;
    b=b+20;
)

int main()
{
    int x,y;
    cout<<"enter two no\n";
    cin>>x>>y;

    show(x,y);
    cout<<"\n";
    cout<<"x="<<x<<"\n";
     cout<<"y="<<y<<"\n";

}




// return a,b; 
// hoga to b answer aayega 
