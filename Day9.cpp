#include <iostream>
using namespace std;
int main(){
    int prashn;
    cin>>prashn;
    int krdunga=0;
    int a;
    int b;
    int c;
    while(prashn--){
        cin>>a;
        cin>>b;
        cin>>c;
        if((a+b+c)>=2){
            krdunga++;
        }
    }
    cout<<krdunga;
}