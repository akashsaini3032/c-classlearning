
#include <iostream>
using namespace std;
int main() {
    string website;
    
    string visit;
    
    cout<<"choice bank between sbi,axis,icici";
    cin>>visit;
    
    if(visit=="sbi")
    {
        cout<<"choice between homeloan,personalloan";
        cin>>visit;
        if(visit=="homeloan")
        {
            cout<<"5lakh";
        }
        else if (visit=="personalloan")
        {
            cout<<"2lakh";
        }
        else
        {
            cout<<"invalid";
        }
        
    }
    else if(visit=="axis")
    {
       cout<<"choice between homeloan,personalloan";
        cin>>visit;
        if(visit=="homeloan")
        {
            cout<<"5lakh";
        }
        else if (visit=="personalloan")
        {
            cout<<"2lakh";
        }
        else
        {
            cout<<"invalid";
        } 
    }
    else if(visit=="icici")
    {
      cout<<"choice between homeloan,personalloan";
        cin>>visit;
        if(choice=="homeloan")
        {
            cout<<"5lakh";
        }
        else if (visit=="personalloan")
        {
            cout<<"2lakh";
        }
        else
        {
            cout<<"invalid";
        }  
    }
    
    else
    {
        cout<<"invalid";
    }
}