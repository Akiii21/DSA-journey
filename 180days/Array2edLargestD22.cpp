#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[1000], n;
    cout<<"Enter the size of array(n>3): ";
    cin>>n;
    if(n<=3){
        cout<<"INVALID size";
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"entre the"<<i+1<<" element: ";
        cin>>arr[i];
    }
    int firstlargest=INT_MIN, secondlargest=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>firstlargest)
        {
            secondlargest=firstlargest;
            firstlargest=arr[i];
        }
        else if (arr[i]>secondlargest&&arr[i]<firstlargest)
        {
            secondlargest=arr[i];
        }
        
        
    }
    cout<<"second largest element is"<<secondlargest;
    

}