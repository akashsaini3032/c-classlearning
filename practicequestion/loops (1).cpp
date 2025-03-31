1)// DO WHILE LOOP:
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {

        cout << 2 * i << endl;
        ++i;
    } while (i <= 10);
}
2)// WHILE LOOP :
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 10)
    {
        cout << 2 * i << endl;
        ++i;
    }
}
3)// FOR LOOP:
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << 2 * i << " ";
    }
}
4)// Printing table from 2 to 10 by FOR LOOP :
#include <iostream>
using namespace std;
int main()
{
    for (int i = 2; i <= 10; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cout << i * j << endl;
        }
        cout << "\t";
    }
}
5)// Printing table from 2 to 10 by FOR DO WHILE LOOP :
#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    do
    {
        cout << "Tables :";
        int j = 1;
        do
        {

            cout << i * j << endl;
            j++;
        } while (j <= 10);
        i++;
    } while (i <= 10);
}
6)// Printing table from 2 to 10 by FOR WHILE LOOP :
#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    while (i <= 10)
    {
        int j = 1;
        while (j <= 10)
        {

            cout << i * j << endl;
            j++;
        }
        i++;
        cout << "\t";
    }
}
7)// WAP TO FIND SUM OF N NATURAL NUMBERS :
#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}
8)// WAP TO FIND factorial OF N NATURAL NUMBERS :
#include <iostream>
using namespace std;
int main()
{
    int n;
    int factorial = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << factorial;
}
9)// WAP TO FIND factors OF N NATURAL NUMBERS :
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
}
10)// WAP TO FIND power of any number :
#include <iostream>
using namespace std;
int main()
{
    int num;
    int power;
    int result = 1;
    cout << "enter num";
    cin >> num;
    cout << "enter pow";
    cin >> power;
    for (int i = 1; i <= power; i++)
    {
        result = result * num;
    }
    cout << result;
}
11)// Check whether number is prime or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num";
    cin >> num;
    int counter = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}
12)////Check whether number is perfect or not.
#include <iostream>
using namespace std;
int main()
{
    int num, sum;
    cout << "enter num";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << "perfect";
    }
    else
    {
        cout << "not perfect";
    }
}
13)//////prime or not by another approach :
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter";
    cin >> num;
    if (num <= 1)
    {
        cout << "not a prime";
        return 0;
    }
    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "not prime";
            return 0;
        }
    }

    cout << "prime";
}
14)/// 3 attempt password :
#include <iostream>
using namespace std;
int main()
{
    int psw = 123;
    int u;
    cout << "enter psw"; // 1 display
    cin >> u;
    for (int i = 1; i <= 3; i++)
    {
        if (psw == u)
        {
            cout << "open";
            return 0;
        }
        else
        {
            if (i == 3)
            {

                cout << "blocked";
            }
            else
            {
                cout << "enter again"; //
                cin >> u;
            }
        }
    }
}
15)// Reversing a Number :
#include <iostream>
using namespace std;
int main()
{
    int num; // 5674
    int rev = 0;
    cout << "enter num";
    cin >> num;
    while (num != 0)
    {
        rev = rev * 10 + num % 10; // 4765=rev
        num = num / 10;            // 0=num
    }
    cout << rev;
}
16)//////ARMSTRONG NUMBER :
#include <iostream>
using namespace std;
int main()
{
    int num, digit; // 153
    int sum = 0;
    cout << "enter num";
    cin >> num;
    int cpy = num;
    while (num != 0)
    {
        digit = num % 10;                  // 1
        sum = sum + digit * digit * digit; // 153
        num = num / 10;                    // 0
    }
    if (cpy == sum)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "no";
    }
}
17)// Find the count of digits in a user-input number that divide the number itself :
#include <iostream>
using namespace std;
int main()
{
    int digit;
    int num;
    cout << "enter num";
    cin >> num;
    int cpy = num;
    int count = 0;
    while (num != 0)
    {
        digit = num % 10;
        if (cpy % digit == 0)
        {
            count++;
        }
        num = num / 10;
    }

    cout << count;
}
18)// Find the count of digits in a given number :
#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "enter num";
    cin >> num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << count;
}
/19)// Palindrome Number :
#include <iostream>
using namespace std;
int main()
{
    int num;
    int rev = 0;
    cout << "enter num";
    cin >> num;
    int cpy = num;

    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (rev == cpy)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not a Palindrome Number";
    }
}
20)// WAP to print all prime numbers in a given range :
#include <iostream>
using namespace std;
int main()
{
    int rangeS;
    int rangeE;
    cout << "enter ranges";
    cin >> rangeS >> rangeE;
    for (int num = rangeS; num <= rangeE; num++)
    {
        if (num > 1)
        {
            int count = 0;
            for (int i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }

            if (count == 0)
            {
                cout << num;
            }
        }
    }
}
21)/////AP SERIES :
/// Sir method:
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int d = 2;
    int n = 7;
    int term = 0;
    for (int i = 0; i < n; i++)
    {
        term = a + i * d;
        cout << term << " ";
    }
}
/// My method:
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int d = 2;
    int n;
    cout << "enter n";
    cin >> n;
    int term = 0;
    for (int i = 1; i <= n; i++)
    {
        term = a + (i - 1) * d;
        cout << term << " ";
    }
}
22)////GP :
#include <iostream>
using namespace std;
int main(){
    int a=2;    
    int r=3;       
    int n=5;       
for (int i = 0; i < n; i++)
    {
        int result = 1; 
       
        for (int j = 0; j < i; j++) 
        {
            result = result * r;
        }
        int term = a * result; 
        cout << term << " ";  
    }
}
23)//Fibonacci series :
#include<iostream>
using namespace std;
int main(){
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
24)///nth term :
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int term=0;
for (int i = 1; i <=n; i++){
     
     term=term*10+1;
     
     cout<<term<<endl;
    }

}
25)//Find the greatest digit in a given number :
#include <iostream>
using namespace std;
int main(){
  int num,digit;//8754
  int a=0;
  cout<<"enter num";
  cin>>num;
  while(num>0){
      digit=num%10;
      if(digit>a){
          a=digit;
          
      }
      num=num/10;
      
  }
  cout<<a;
  
}
26)//Find the greatest digit in a given number :
#include <iostream>
using namespace std;
int main(){
  int num,digit;//8754
  int a=9;
  cout<<"enter num";
  cin>>num;
  while(num>0){
      digit=num%10;
      if(digit<a){
          a=digit;
          
      }
      num=num/10;
      
  }
  cout<<a;
  
}
27)HCF :
#include <iostream>
using namespace std;
int main(){
  int smaller,larger;
  int hcf=0;
  cout<<"enter 2 num";
  cin>>smaller>>larger;
  for(int i=1;i<=smaller;i++){
      if(smaller%i==0 && larger%i==0){
          hcf=i;
      }
  }
  cout<<hcf;
}
28)//LCM:
#include <iostream>
using namespace std;
int main(){
  int smaller,larger,lcm;
  int hcf=0;
  cout<<"enter 2 num";
  cin>>smaller>>larger;
  for(int i=1;i<=smaller;i++){
      if(smaller%i==0 && larger%i==0){
          hcf=i;
      }
  }
lcm=(larger*smaller)/hcf;
cout<<lcm;
}
//Another way and correct way of lcm :
#include <iostream>
using namespace std;
int main(){
  int smaller,larger;
  int lcm=0;
  cout<<"enter 2 num";
  cin>>smaller>>larger;
  for(int i=larger; ;i=i+larger){
      if(i%smaller==0 && i%larger==0){
         lcm=i;
         break;
      }
  }
  cout<<lcm;
}
// 
#include <iostream>
using namespace std;
int main()
{
    int arr[4];
   
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
    int min=arr[0];
      for(int i=0;i<4;i++){
          if(arr[i]<min){
            min=arr[i];  
          }
        
    }
    cout<<endl;
    cout<<min;
    
   
}