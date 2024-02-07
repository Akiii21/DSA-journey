#include <iostream>
using namespace std;
int main(){
    int n=8;
    int a=0, b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=n; i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;


    }


}