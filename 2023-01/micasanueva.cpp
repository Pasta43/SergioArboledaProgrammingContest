#include <iostream> 

using namespace std; 

int main(){ 

    int N,bathrooms,rooms,average_time,parks,value;
    bool flag=false;
    cin>> N;
    for (int i = 0; i < N; i++) {
        cin>>bathrooms>>rooms>>average_time>>parks>>value;
        if(bathrooms>=2 && rooms>=4 && average_time<35 && parks>=4){
            cout<<value<<endl;
            flag=true;
        }
    }
    if(!flag){
        cout<<"NO DISPONIBLE";
    }
    return 0; 
} 