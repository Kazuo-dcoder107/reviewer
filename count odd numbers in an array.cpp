#include<iostream>
using namespace std;

int main(){
    int siArr;
    
    cout<<"Enter size of the array: ";
    cin>>siArr;
    cout<<"Enter elements of the array: \n";
    int eLemeNt[siArr];
    for(int i=0; i<siArr; i++){
        cin>>eLemeNt[i];
    }
    int ODd=0;
    for(int i=0; i<siArr; i++){
        int solve = eLemeNt[i]%2;
        if(solve!=0){
            ODd++;
        }
    }
    cout<<"Count of odd numbers in the array: "<<ODd;
    return 0;
}
