#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Number is divisible by 5 and 3";

        }
        else{
            cout<<"not matching condition";
             }
    }
    else{
        cout<<"Not matching condition";
    }
    return 0;
}