#include <iostream>
using namespace std;

void printTable(int start,int end,int step){
    for (int d;start <= end;start=start+step) {
      d = (5 * (start - 32)) / 9;
      cout<<start<<" "<<d<<endl;
      
    }
}
int main(){
    int start,end,step;
    cin>>start>>end>>step;
    printTable(start,end,step);
    
}