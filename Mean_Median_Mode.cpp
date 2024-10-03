//Mean Median Mode

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    float sum=0,mean,a[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element :";
        cin>>a[i];
    }
    
    //mean
    for(int j=0;j<n;j++)
    {
        sum = sum + a[j];
    }
    mean = sum/n;
    cout << "Mean : "<< mean;
    cout << endl;

    //median
    sort(a, a + n);
    cout << "Array After Sorting: ";
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    return 0;


}

// // C++ Program to how to sort an array
// #include <algorithm>
// #include <iostream>
// using namespace std;

// int main()
// {
//     // Initializing an array
//     int arr[] = { 5, 4, 1, 2, 3 };

//     // Calculate the size of the array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Print the array before sorting the elements
//     cout << "Array Before Sorting: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Sort the array
//     sort(arr, arr + n);

//     // Print the array after sorting the elements
//     cout << "Array After Sorting: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }