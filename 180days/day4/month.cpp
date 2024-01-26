//Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  string month[]={"jan", "feb", "march", "april", "may", "june", "july", "aug", "sep", "oct", "nov", "dec"};
  if(n>0 && n<=12){
  cout<<month[n-1]<<endl;
  }
  else{
    cout<<"invalid input"<<endl;
  }
}