#include<iostream>
using namespace std;
int main(){
    int arr[1000],size, key;
    cout<<"enter size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1 <<"element"<<endl;
        cin>>arr[i];
    }
    cout<<"enter key: ";
    cin>>key;
    for (int i = 0; i < size; i++)
    {
        if (key==arr[i])
        {
            cout<<i;
            return 0;
        }
        
    }
    cout<<-1;
    

    
}