//Practice Ques. Task for Array & Functions :

// Fnc is of return type & non return :
// Factorial :
// #include<iostream>
// using namespace std;
// int fac=1;
// int facto(int num){
// for(int i=1;i<=num;i++){
// fac=fac*i;
// }
// return fac;
// }
// int main(){
// cout<<facto(5);
// }
// #include <iostream>
// using namespace std;

// int ascnd(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int arr[] = {3, 6, 2, 8, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     ascnd(arr, size);
// }

// #include <iostream>
// using namespace std;

// void leap(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout<<year<< " is a Leap Year.";
//     } else {
//         cout<<year<< " is not a Leap Year." ;
//     }
// }

// int main() {
//     int year;
//     cout<<"Enter a year: ";
//     cin>>year;

//     leap(year);

//     return 0;
// }
// #include<iostream>
// using namespace std;
// void sum(int &a,int &b){
// a=a+10;
// b=b+5;
// }
// int main(){
// int x,y;
//     cin>>x>>y;
// sum(x,y);
// cout<<x<<" "<<y;
// }
// #include<iostream>
// using namespace std;
//  int sum(int &a,int &b){
// a=a+10;
// b=b+5;
// }
// int main(){
// int x,y;
//     cin>>x>>y;
// sum(x,y);
// cout<<x<<" "<<y;
// }
