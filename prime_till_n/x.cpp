#include<iostream>
using namespace std;

int  main(){
    int n,d;
    cin>>n;
    if(n>=2){
      cout<<2<<endl;
      int pnos=3;
      while(pnos<=n){
        bool flag=false;
        int d=2;
        while(d<pnos){
        
            if(pnos%d==0){
            flag=true;
            d++;
            continue;
            }
            d++;
        }
        if(flag==false){
            cout<<pnos<<endl;
            
        }
        pnos++;
        }
        
        

    }
    
}



   