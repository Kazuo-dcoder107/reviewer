#include<iostream>
using namespace std;

int main(){
    int sukat;
    
    cout<<"Enter the size of array: ";
    cin>>sukat;
    cout<<"Enter the elements of the array: \n";
    int elemento[sukat];
    for(int i=0; i<sukat; i++){
        cin>>elemento[i];
    }
    cout<<"The array in reverse order is: ";
    for(int i=sukat-1; i>=0; i--){
        cout<<elemento[i]<<" ";
    }
    return 0;
}
