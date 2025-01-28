// FUNCTIONS IN CPP :
// RETURN TYPE(int) WITH PARAMETER :
#include <iostream>
using namespace std;
int sum(int a,int b){
  return a+b;
}
int main(){
 cout<<sum(10,20); 
}
// RETURN TYPE(int) WITHOUT PARAMETER :
#include <iostream>
using namespace std;
int sum(){
    int a=23;
    int b=54;
  return a+b;
}
int main(){
 cout<<sum(); 
}
//NON RETURN TYPE (VOID) WITH PARAMETER :
#include <iostream>
using namespace std;
void sum(int a, int b){
    
cout<<a+b;
}
int main(){
 sum(6,7); 
}
//NON RETURN TYPE (VOID) WITHOUT PARAMETER :
#include <iostream>
using namespace std;
void sum(){
    int a=2;
    int b=5;
cout<<a+b;
}
int main(){
 sum(); 
}
//SUM WITH VOID :
#include <iostream>
using namespace std;
void sum(int n){
    int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
    
}
cout<<sum;
}
int main(){
 sum(5);
}
// FACTORIAL WITH VOID:
#include <iostream>
using namespace std;
void factorial(int n){
    int fac=1;
for(int i=1;i<=n;i++){
    fac=fac*i;
    
}
cout<<fac;
}
int main(){
 factorial(5);
}
//FACTORS WITH VOID :
#include <iostream>
using namespace std;
void factors(int n){
for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i;
    }
    
}

}
int main(){
 factors(6);
}
// PERFECT WITH VOID :
#include <iostream>
using namespace std;
void perfect(int n){
   int sum=0;
for(int i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }
   
}

if(sum==n){
    cout<<"perfect";
}
else{
    cout<<"NOT PERFECT";
}

}
int main(){
 perfect(6);
} 
//ARMSTRONG WITH VOID:
#include <iostream>
using namespace std;
void arms(int n){
   int rev=0;
   int sum=0;
   int cpy=n;
   int digit;
while(n!=0){
    digit=n%10;
    sum=sum+digit*digit*digit;
    n=n/10;
}

if(cpy==sum){
    cout<<"arms";
}
else{
    cout<<"not arms";
}

}
int main(){
 arms(345);
} 
// SUM WITH RETURN TYPE(int):
#include <iostream>
using namespace std;
int sum(int n){
    int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
    
}
return sum;
}
int main(){
 cout<<sum(5);
}
// FACTORIAL WITH RETURN TYPE(int):
#include <iostream>
using namespace std;
int factorial(int n){
    int fac=1;
for(int i=1;i<=n;i++){
    fac=fac*i;
    
}
return fac;
}
int main(){
 cout<<factorial(5);
}
// FACTORS WITH RETURN TYPE(int):
#include <iostream>
using namespace std;
int factors(){
    int n=6;
    
for(int i=1;i<=n;i++){
    
    if(n%i==0){
        cout<< i;
    }
   
  
 
}
return 0;
}
int main(){
factors();
  
}
//PERFECT WITH RETURN TYPE INT :
#include <iostream>
using namespace std;
int perfect(int n){
   int sum=0;
for(int i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }
   
}

if(sum==n){
    cout<<"perfect";
}
else{
    cout<<"NOT PERFECT";
}
return 0;
}
int main(){
 perfect(6);
} 
//ARMSTRONG WITH RETURN TYPE INT :
#include <iostream>
using namespace std;
int arms(int n){
   int rev=0;
   int sum=0;
   int cpy=n;
   int digit;
while(n!=0){
    digit=n%10;
    sum=sum+digit*digit*digit;
    n=n/10;
}

if(cpy==sum){
    cout<<"arms";
}
else{
    cout<<"not arms";
}
return 0;
}
int main(){
 arms(153);
} 
// FIBONACCHI 
#include <iostream>
using namespace std;
int fibonacchi(int n){
   int first=0;
   int second=1;
   int next;
   cout<<first;
   cout<<second;
    for(int i=3;i<=n;i++){
   next=first+second;
   first=second;
   second=next;
  cout<<next;
   
    }
    
    
    return 0;
}
int main()
{
fibonacchi(6);

}
// #include <iostream>
// using namespace std;
// int rev=0;
// int reverse(int n){
//     for(int i=1;i<=n;i++){
//     rev=rev*10+n%10;
//     n=n/10;
//     }
//     cout<<rev;
//     return 0;
// }
// int main()
// {
//  reverse(345);
// }
// #include <iostream>
// using namespace std;
// int rev=0;

// int reverse(int n){
//     int cpy=n;
//     for(int i=1;i<=n;i++){
//     rev=rev*10+n%10;
//     n=n/10;
//     }
//     if(rev==cpy){
//         cout<<"pallindrome";
//     }
//     else{
//         cout<<"not ";
//     }
    
//     return 0;
// }
// int main()
// {
//  reverse(345);

// }
// #include <iostream>
// using namespace std;
// int fibonacchi(int n){
//   int first=0;
//   int second=1;
//   int next;
//   cout<<first;
//   cout<<second;
//     for(int i=3;i<=n;i++){
//   next=first+second;
//   first=second;
//   second=next;
//   cout<<next;
   
//     }
    
    
//     return 0;
// }
// int main()
// {
// fibonacchi(6);

// }
//FUNCTION OVERLOADING :
//on the basis of parameters
//on the basis of data types
//on the basis of order of data types of parameters

// RECURSION :

