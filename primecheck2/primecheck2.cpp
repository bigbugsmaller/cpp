#include <iostream>
using namespace std;

 int main(){
    int a;
    cin>>a;
    int d=2;
    bool flag=false;
    while(d<a){
        if(a%d==0){
            flag=true;
        }
    d++;
    }
    if (flag==false){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Composite"<<endl;
    }    
 }    
    
    
    
    
    


