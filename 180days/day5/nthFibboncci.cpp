//print nth fibonacci number
#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<b;
}