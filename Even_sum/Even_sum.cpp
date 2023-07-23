#include<iostream>
using namespace std;
int main(){
     int sum=0,a=0 , N=1;
     while (a<=N){
        if(N>=2)
        {sum=sum+a;
        a=a+2;
        }
        else if(N<2){
        break;}
     }
     cout<<sum<<endl;
}