// #include <iostream>
// using namespace std;
// int c;
// bool flag;
// void bubble(int arr[],int s){
//     for(int i=0;i<s;i++){
//         flag=false;
//         for(int j=0;j<s-i-1;j++){
//             c++;
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 flag=true;
//             }
//         }
//         if(flag==false){
//             break;
//         }
//     }
// }

// int main()
// {
//     int s;

//     cout << " Enter size of array";
//     cin >> s;
//     if(s<=0){
//         cout<<"Invalid Size";
//        return 0;
//     }
//     if(s==1){
//         cout<<"Atleast 2 elements should be there..";
//          return 0;
//     }
//     if(s>10){
//         cout<<"Overflow";
//         return 0;
//     }
//     int arr[s];

// cout<<"Enter "<< s <<"elements of an array";
// for(int i=0;i<s;i++){
//     cin>>arr[i];
// }

// bubble(arr,s);
// for(int i=0;i<s;i++){
//     cout<<arr[i];
// }
// cout<<c;

// }
// stack & heap memory ?
// types of programming?
// types of memory
// Dependency-->in nested loop , inner loop depends upon outer loop
// Time & space complexity

// #include <iostream>
// using namespace std;

// void bubble(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){

//         bool swap=false;
//         count++;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 swap=true;
//             }
//         }
//         if(swap==false){
//         break;
//     }
//     }
//   cout<<count;
// }

// int main(){
//     int s;
//     int arr[]={40,50,10,20,30};
// bubble(arr,5);

// }

// #include <iostream>
// using namespace std;

// void bubble(int arr[], int s)
// {
//     int count = 0;
//     for (int i = 0; i < s; i++)
//     {
//               bool flag = false;

//         count++;
//         for (int j = 0; j < s - i - 1; j++)
//         {
      
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 flag = true;
//             }
           
//         }
//          if (!flag)
//             {
//                 break;
//             }
//     }
//     cout << count << endl;
// }
int main()
{
    int arr[] = {10, 89, 34, 62, 13, 3};
    int s = 6;
    bubble(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
}