#include <iostream>
using namespace std;
//thread
void sum()
{
    for(int i=1;i<100;++i)
    {
        cout<<char(i);
    }
}

void sub()
{
    for(int i=1;i<10;++i)
    {
        cout<<i;
    }
}

int main()
{
    thread t1(sum);
    thread t2(sub);

    t1.join();
    t2.join();
}
