#include <iostream>
#include <vector>
using namespace std;
int main(){
    int inputs;
    cin>>inputs;
    int outputs = inputs;
    vector<string> str;
    while(inputs>0){
        string s;
        string n ="";

        cin>>s;
        if(s.length()>10){
            int num = s.length()-2;
            n = n + s[0];
            n = n + to_string(num);
            n = n + s[s.length()-1];
            str.push_back(n);
        }
        else{
            str.push_back(n);
        }
        inputs--;
    }
    int i=0;
    while(outputs>0){
        cout<<str[i]<<endl;
        i++;
        outputs--;
    }
    
    
}