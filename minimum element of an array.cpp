#include<iostream>
using namespace std;

int main(){
    int esize;
    
    cout<<"Enter size of array: ";
    cin>>esize;
    cout<<"Enter elements of array: \n";
    int minele[esize];
    for(int i=0; i<esize; i++){
        cin>>minele[i];
    }
    int maliit = minele[0];
    for(int i=0; i<esize; i++){
        if(minele[i]<maliit){
             maliit = minele[i];
        }
    }
    cout<<"Minimum element in array is: "<<maliit;
    return 0;
}
