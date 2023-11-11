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
    int firstsmallest=INT_MAX, secondsmallest=INT_MAX, thirdsmallest=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<firstsmallest&& arr[i]<secondsmallest)
        {
            thirdsmallest=secondsmallest;
            secondsmallest=firstsmallest;
            firstsmallest=arr[i];
        }
        else if (arr[i]<thirdsmallest&&arr[i]>firstsmallest)
        {
            secondsmallest=arr[i];
        }
        
        
    }
    cout<<"third smallest element is "<<thirdsmallest;
    

}