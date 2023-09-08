#include <iostream>
using namespace std;

bool fibonacci(int n){
    if(n<=2){
        return true;
    }
    else{
    int fx=1, fy=1,i=3;
    bool flag=false;
    while (i<=10000){
        int ans=fx+fy;
        fx=fy;
        fy=ans;
        if(n==ans){
            flag=true;
            break;
        }
        i++;
    }    
        if (flag==true){
            return true;
            
        }
        else{
            return false;
        }
        
    
    }
}
int main(){
    int n;
    cin>>n;
    bool ans=fibonacci(n);
    if(ans==true){
       cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    

}