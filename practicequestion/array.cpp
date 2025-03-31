 // STATIC ARRAY :
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {101, 102, 103, 104};
    cout << arr[0] << arr[1] << arr[2] << arr[3];
}
// PRINTING ARRAY BY LOOP :
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {101, 102, 103};
    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i];
    }
}
// 
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {101, 102, 103, 104, 105};
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i];
    }
}
// DYNAMIC ARRAY :
#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    for (int i = 0; i <= 19; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= 19; i++)
    {
        cout << arr[i];
    }
}
// Prettier Way for printing array :
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "ENTER Array " << i << " index element ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
//UPDATING AN ARRAY :
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "ENTER Array " << i << " index element : ";
        cin >> arr[i];
        cout << "\n";
    }
    cout << "Updated Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << (arr[i] = arr[i] + 5) << " ";
    }
}
// SQUARES OF EACH ELEMENTS OF AN ARRAY :
#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << i << " index element of an array : ";
        cin >> arr[i];
        cout << endl;
    }
    cout << "Array : ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Squares of each element of an array : ";
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr[i] * arr[i];
        cout << arr[i] << " ";
    }
}
// SUM OF EACH ELEMENT OF AN ARRAY :
#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << i << " index element of an array : ";
        cin >> arr[i];
        cout << endl;
    }
    cout << "Array : ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of each element of an array : " << sum;
}
//LARGEST ELEMENT OF AN ARRAY :
#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << i << " index element of an array : ";
        cin >> arr[i];
        cout << endl;
    }
    cout << "Array : ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Largest element of an array : " << max;
}
// SMALLEST ELEMENT OF AN ARRAY :
#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << i << " index element of an array : ";
        cin >> arr[i];
        cout << endl;
    }
    cout << "Array : ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int min = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Smallest element of an array : " << min;
}
//Swapping last element wid first element of an array :
#include <iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int temp=arr[0];
arr[0]=arr[4];
arr[4]=temp;
for(int i=0;i<5;i++){
    cout<<arr[i]<<'\t';
}
}
// Sorting array elements in ascending order :
#include <iostream>
using namespace std;
int main(){
int arr[]={23,45,12,11,33};
cout<<"Original Array "<<endl;
for(int i=0;i<5;i++){

    cout<<arr[i]<<'\t';
}
cout<<endl;
cout<<"Sorted Array in ascending order "<<endl;
for(int i=0;i<5;i++){
for(int j=i+1;j<5;j++){
    if(arr[j]<arr[i]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<'\t';
}
}
// Sorting array elements in descending order : 
#include <iostream>
using namespace std;
int main(){
int arr[]={23,45,12,11,33};
cout<<"Original Array "<<endl;
for(int i=0;i<5;i++){

    cout<<arr[i]<<'\t';
}
cout<<endl;
cout<<"Sorted Array in descending order "<<endl;
for(int i=0;i<5;i++){
for(int j=i+1;j<5;j++){
    if(arr[j]>arr[i]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<'\t';
}
}
// Reversing an Array :
#include <iostream>
using namespace std;
int main(){
int arr[]={23,45,12,11,33};
cout<<"Original Array :"<<endl;
for(int i=0;i<5;i++){

    cout<<arr[i]<<'\t';
}
cout<<endl;
cout<<"Reveresd Array :"<<endl;
 int i=0;
    int j=4;
while(i!=j){
   
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<'\t';
}
}
// 
#include <iostream>
using namespace std;
int main(){
 int arr[4];
 for(int i=0;i<4;i++){
     cin>>arr[i];
 }
 for(int i=0;i<4;i++){
     cout<<arr[i];
 }
 int i=0;
 int j=3;
while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
for(int i=0;i<4;i++){
    cout<<arr[i];
}

}
//Find missing element in an sorted array:
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,6,8};
 for(int i=0;i<4;i++){
     if(arr[i+1]-arr[i]>1){
         cout<<arr[i]+1<<" ";
     }
 }
  
}
//Find multiple missing element in an sorted array:
#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,5,6,8};
 for(int i=0;i<4;i++){
     if(arr[i+1]-arr[i]>1){
int start=arr[i]+1;
while(start<arr[i+1]){
    cout<<start++<<"\t";
}
 }
  
}
}
// Find all the zero in an array & shift it to the end of it :
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,0,4,0,32,6,0,8,0,7};
    int j=0;
for(int i=0;i<10;i++){
    if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    

for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}
}
// Find all the zero in an array & shift it to the end of it & re arrange it in descending order :
#include <iostream>
using namespace std;
int main(){
  int arr[]={2,0,3,4,0,1,8};
 for(int i=0;i<7;i++){
for(int j=i+1;j<7;j++){
         if(arr[i]<arr[j]){
             int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
      }
cout<<arr[i]<<" ";
  }
     
  }


// FIND FREQUENCY OF ARRAY ELEMENTS :
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,1,2,1,3,1,2};
    for(int i=0;i<7;i++){
        if(arr[i]!=-1){
            int count =1;
            for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        } 
        cout<<arr[i]<<" = "<<count<<endl; 
        }
     
    }
    
    
}
//If array elemets are repeated print them only single tym :
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,1,4,5};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
    for(int i=0;i<7;i++){
        if(arr[i]!=-1){
           cout<<arr[i]<<'\t'; 
        }
        
    }
    
}
// same as above but lesser by 1 loop :
#include <iostream>
using namespace std;
int main(){
  int arr[]={2,4,3,4,1,8,1};
  int num;
  
  for(int i=0;i<7;i++){
      for(int j=i+1;j<7;j++){
          if(arr[i]==arr[j]){
             arr[j]=-1;
          }
      }
     if(arr[i]!=-1){
     cout<<arr[i]<<" ";
  }
     
  }
 
  

}
// Find  nth largest element  in an array :
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,6,9,4};
    int num;
    for(int i=0;i<6;i++){
            for(int j=i+1;j<6;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        } 
       
        }
        cout<<"enter numth";
        cin>>num;
        cout<<"the "<<num<<" largest element is "<<arr[num-1];
     
    }
//Find the elements of the array that sum up to the target value :
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,6,9,4};
    int num;
       cout<<"Enter Target ";
        cin>>num;
        cout<<"The Targeted value is "<<arr[num-1]<<endl;
       for(int i=0;i<6;i++){
            for(int j=i+1;j<6;j++){
            if(arr[i]+arr[j]==arr[num-1]){
               cout<<arr[i]<<" "<<arr[j]<<" ";
            }
        } 
       
        }
     
     
    }
//print all duplicate elements skip unique ones :
#include <iostream>
using namespace std;
int main(){
  int arr[]={1,2,1,2,3,3,2,1,2,5};
 for(int i=0;i<10;i++){
     bool dup= false;
for(int j=i+1;j<10;j++){
        if(arr[i]==arr[j]){
            arr[j]=-1;
            dup=true;
        }
      }
if(arr[i]!=-1 && dup==true){
    cout<<arr[i]<<" ";
}
  }
     
  }
//print all unique elements skip duplicates ones :
#include <iostream>
using namespace std;
int main(){
  int arr[]={1,2,1,2,3,3,2,1,2,5};
 for(int i=0;i<10;i++){
     bool dup = false;
     for(int j=i+1;j<10;j++){
        if(arr[i]==arr[j]){
           arr[j]=-1;
           dup =true;
        }
     }
     if(arr[i]!=-1 && dup!=true){
         cout<<arr[i];
     }
}

  }
// Keep  FIRST OCCURENCE :
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 1};  
    
    for(int i = 0; i < 5; i++){
        bool Dup = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                Dup = true;
                break;
            }
        }
        if(!Dup){
            cout << arr[i] << " ";
        }
    }
  
}
//ANOTHER WAY OF  KEEPING FIRST OCCURENCE by switching position :
#include <iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,1};
  int k=0;
  for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
          if(arr[i]==arr[j]){
              arr[j]=-1;
          }
      }
     
  }
  for(int i=0;i<5;i++){
      if(arr[i]!=-1){
         arr[k]=arr[i];
      k++; 
      }
      
  }
  for(int i=0;i<k;i++){
      cout<<arr[i];
  }
  
}
// this will be same as the above as it removes the duplicate array instead of marking it to -1 :
// remove all occurence :
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 1, 4};
    int target = 1;
    int k = 0;
for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }
for (int i = 0; i < 5; ++i) {
        if (arr[i] != target && arr[i] != -1) {
            arr[k] = arr[i];
            k++;
        }
    }
for (int i = 0; i < k; ++i) {
        cout << arr[i];
    }
    return 0;
}
// Pallindrome :
// <--------------Palindrome In ARRAY-------------->
    int start = 0;
    int end = 4;
    int arr[] = {1, 2, 3, 2, 9};
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            cout << "not palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout << "palindrome";
