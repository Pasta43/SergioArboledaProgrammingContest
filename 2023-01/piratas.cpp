#include <iostream> 

using namespace std; 

int main(){ 

    int X,Y,N; 
    cin>>X>>Y>>N; 
    for (int i = 1; i <= N; i++) { 
        if(i%X==0 or i%Y==0){ 
            if(i%X==0){ 
                cout<<"EC"; 
            } 
            if(i%Y==0){ 
                cout<<"EI"; 
            } 
        }else{ 
            cout<<i; 
        } 
        cout<<endl; 
    } 
    return 0; 
} 