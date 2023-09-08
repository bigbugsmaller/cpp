#include<iostream>
using namespace std;

int main(){
    char c;
    c=cin.get();
    int digit=0,chars=0,extras=0;
    while(c!='$'){
        if(c>='0' && c<='9'){
            digit++;
        }
        else if(c>='a' && c<='z'){
            chars++;
        }
        else if(c==' '|| c=='\t'||c=='\n'){
            extras++;
        }
        c=cin.get();
        

    }
    cout<<chars<<" "<<digit<<" "<<extras<<endl;
     
  
}


