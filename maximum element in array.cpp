#include<iostream>
using namespace std; 

int main(){
    int SiZe;
    
    cout<<"Enter size of array: ";
    cin>>SiZe;
    cout<<"Enter elements of array: \n";
    int arrele[SiZe];
    for(int i=0; i<SiZe; i++){
        cin>>arrele[i];
    }
    int maxisize = 0;
    for(int i=0; i<SiZe;i++){
        if(arrele[i]>=maxisize){
            maxisize=arrele[i];
        }
    }
    cout<<"Maximum element in array is: "<<maxisize<<endl;
    return 0;
}
