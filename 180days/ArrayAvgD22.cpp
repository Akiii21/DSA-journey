#include<iostream>
using namespace std;
int main(){
    int arr[18],sum=0,avg;
    for (int i = 0; i < 18; i++)
    {
        cout<<"Enter the "<<i+1<<" number : ";
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/18;
    cout<<avg;
}