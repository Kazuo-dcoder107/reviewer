#include<iostream>
using namespace std;

int main(){
    int sizearr;
    
    cout<<"Enter size of the array: ";
    cin>>sizearr;
    cout<<"Enter elements of the array: ;
    int EleMents[sizearr];
    for(int i=0; i<sizearr; i++){
        cin>>EleMents[i];
    }
    int Even = 0;
    for(int i=0; i<sizearr; i++){
        for(EleMents[i]%2 = 0){
            Even++;
        }
    }
    cout<<Even;
    return 0;
}
