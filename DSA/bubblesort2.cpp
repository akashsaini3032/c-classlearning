// sir ka code 
// #include <iostream>
// using namespace std;
// void bubles (int arr[],int s)
// {
//     int tmp, c=0;
//     bool d;
//     for(int i=0;i<s;i++)
//     {
//         d=false;
//         for(int j=0;j<s-i-j;j++)
//         {
//             c++;
//             if(arr[j]>arr[j+1])
//             {
//                 tmp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=tmp;
//                 d=true;
//             }
//         }
        
//         if(d==false)
//         {
//             break;
//         }
//     }
    
//     cout<<"\ncounter hit="<<c<<"\n";
// }

// int main() 
// {
//     int s;
//     cout<<"enter the size of array\n";
//     cin>>s;
//     int arr[s];
//     cout<<"enter "<<s<<" value\n";
//     for(int i=0;i<s;i++)
//     {
//         cin>>arr[i];
//     }
//     bubles(arr,s);
//     cout<<"\nafter \n";
//     for(int i=0;i<s;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
// }



// sir ki condition 


// #include <iostream>
// using namespace std;

// void bubles(int arr[], int s) {
//     int tmp, c = 0;
//     bool d;
//     for (int i = 0; i < s; i++) {
//         d = false;
//         for (int j = 0; j < s - i - 1; j++) {
//             c++;
//             if (arr[j] > arr[j + 1]) {
//                 tmp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = tmp;
//                 d = true;
//             }
//         }
        
//         if (d == false) {
//             break;
//         }
//     }

//     cout << "\ncounter hit=" << c << "\n";
// }

// int main() {
//     int s;
//     cout << "Enter the size of the array: ";
//     cin >> s;

//     // Check for array size conditions
//     if (s <= 0) {
//         cout << "Invalid array size\n";
//         return 0;
//     } else if (s == 1) {
//         cout << "Minimum two array elements are necessary\n";
//         return 0;
//     } else if (s > 10) {
//         cout << "Array overflow\n";
//         return 0;
//     }

//     int arr[s];
//     cout << "Enter " << s << " values: \n";
//     for (int i = 0; i < s; i++) {
//         cin >> arr[i];
//     }

//     bubles(arr, s);

//     cout << "\nAfter sorting: \n";
//     for (int i = 0; i < s; i++) {
//         cout << arr[i] << "\t";
//     }

//     return 0;
// }



// user ko dubara option mile size set karne ka


#include <iostream>
using namespace std;

void bubles(int arr[], int s) {
    int tmp, c = 0;
    bool d;
    for (int i = 0; i < s; i++) {
        d = false;
        for (int j = 0; j < s - i - 1; j++) {
            c++;
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                d = true;
            }
        }
        
        if (d == false) {
            break;
        }
    }

    cout << "\ncounter hit=" << c << "\n";
}

int main() {
    int s;
    
    // Take user input for array size until valid size is entered
    while (true) {
        cout << "Enter the size of the array: ";
        cin >> s;

        // Check for array size conditions
        if (s <= 0) {
            cout << "Invalid array size. Please enter a positive value.\n";
        } else if (s == 1) {
            cout << "Minimum two array elements are necessary. Please enter a valid size.\n";
        } else if (s > 10) {
            cout << "Array overflow. Please enter a size less than or equal to 10.\n";
        } else {
            break;  // Valid size entered, exit the loop
        }
    }

    int arr[s];
    cout << "Enter " << s << " values: \n";
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }

    bubles(arr, s);

    cout << "\nAfter sorting: \n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}

