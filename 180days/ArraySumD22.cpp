#include<iostream>
using namespace std;
int main(){
    int arr[20], sum=0;
    for (int i = 0; i < 20; i++)
    {
        cout<<"Enter the "<<i+1 <<"element"<<endl;
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    
}