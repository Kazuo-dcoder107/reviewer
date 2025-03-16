#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int Size;
    float Average = 0;
    
    cout<<"Enter the size of array: ";
    cin>>Size;
    cout<<"Enter "<<Size<<" elements of array: \n";
    float num[Size];
    for(int i=0; i<Size; i++){
        cin>>num[i];
        float ave = Average += num[i] / Size;
    }
    cout<<"The average of the array is: ";
    cout<<fixed<<setprecision(2)<<Average<<endl;
    return 0;
}
