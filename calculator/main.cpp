#include<iostream>
#include <vector> 
#include <string> 
#include"convert.h"
#include"calculate.h"
using namespace std;
int main(){
    string input;
    cout<<"Enter calculation: ";
    getline (cin, input);
    string postFix=convertToPostFix(input);
    // cout<<postFix<<endl;
    int ans=calculator(postFix);
    cout<<"Answer: "<<ans<<endl;
    return 0;
}