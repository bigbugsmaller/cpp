#include <iostream>
using namespace std;

int main(){
    int N,C,sum=0,product=1;
    cin>>N>>C;
    int start=1;
    while(start<=N){
        if(C==1){
        sum=sum+start;
        start++;
        }
        else if (C==2){
        product=product*start;
        start++;
        }
        else {
            cout<<"-1"<<endl;
            break;
        }
    }
    if(C==1){
        cout<<sum<<endl;
    }
    else if(C==2){
        cout<<product<<endl;
    }
    
    
    
}