    #include<iostream>
using namespace std;

int main() {
	int n,d;
    cin>>n;
    if(n==0){
        cout<<"0";
    }
    
    while(n>0){
        d=n%10;
        if(d>0){
            cout<<d;
        }
        
        
        n=n/10;
        
        
    }
    
	
}
