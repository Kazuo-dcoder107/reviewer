#include <iostream>
using namespace std;

int main(){
    int studentgrade[5];
    for (int i = 1; i<=5; i++){
        cout<<"Enter Student Grade ("<<i<<"): ";
        cin>>studentgrade[i];
    }
    cout<<"Entered Grade is: ";
    for(int i = 1; i<=5; i++){
        cout<<studentgrade[i]<<" ";
    }
    int ave =0;
    

    for(int i = 1; i<=5; i++){
        ave +=studentgrade[i] / 5;
    }
    cout<< "\nAverage Grade: "<<ave<<endl;
    
    int highest = 0;
    for(int i = 1; i<=5; i++){
        if(highest<studentgrade[i]){
            highest=studentgrade[i];
        }
    }
    cout<<"Highest Grade: "<<highest<<endl;
    
    int lowest=studentgrade[0];
    for(int i = 0; i<5; i++){
        if(studentgrade[i] < lowest){
            lowest=studentgrade[i];
        }
    }
    cout<<"Lowest Grade: "<<lowest<<endl;
     return 0;
}