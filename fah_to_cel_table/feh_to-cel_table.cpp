
#include<iostream>
using namespace std;


int main(){
    int S, E,W,d;
    cin>>S>>E>>W;
    while (S <= E) {
      d = (5 * (S - 32)) / 9;
      cout <<S<<" "<< d << endl;
      S = S + W;
    }
}