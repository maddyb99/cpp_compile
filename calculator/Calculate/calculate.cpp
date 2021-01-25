// #include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;
int calculate(int a,int b,char op){
    switch(op){
        case '+':return a+b;
                break;
        case '-':return a-b;
                break;
        case '*':return a*b;
                break;
        case '/':return a/b;
                break;
        case '^':return pow(a,b);
                break;
        default: return 0;
    }
}
int calculator(string postFix){
    // cout<<"got: "<<postFix<<endl;
    stack<char> postFixStack;
    postFixStack.push('$');
    for (char &ch:postFix){
        // cout<<"Got char: "<<ch<<endl;
        // cout<<"Stack top: "<<postFixStack.top()<<endl;
        if(isalnum(ch))
            postFixStack.push(ch);
        else
        {
            int b=postFixStack.top()-48;
            // cout<<"b: "<<b<<endl;
            postFixStack.pop();
            int a=postFixStack.top()-48;
            // cout<<"a: "<<a<<endl;
            // cout<<calculate(a,b,ch)<<endl;
            postFixStack.pop();
            postFixStack.push(calculate(a,b,ch)+48);
            // cout<<postFixStack.top();
        }
    }
    return postFixStack.top()-48;
}