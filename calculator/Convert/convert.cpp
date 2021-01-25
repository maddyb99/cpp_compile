#include <stack> 
#include <vector> 
#include <string> 
#include<locale>
// #include<iostream>
#include"convert.h"
using namespace std;
int getPrecedence(char ch) {
   if(ch == '+' || ch == '-') 
      return 1;              
    else if(ch == '*' || ch == '/') 
      return 2;            
    else if(ch == '^') 
      return 3;            
    else 
      return 0;
}

string convertToPostFix(string input){
    string postFix="";
    stack<char> postFixStack;
    postFixStack.push('$');
    for (char &ch:input){
        // cout<<"Got char: "<<ch<<endl;
        // cout<<"Stack top: "<<postFixStack.top()<<endl;
        if(isalnum(ch))
            postFix+=ch;
        else if (ch == ')')
        {
            while(postFixStack.top() != '$' && postFixStack.top() != '(') 
            {
                postFix += postFixStack.top(); 
                postFixStack.pop();
            }
            postFixStack.pop(); 
        }
        else if(postFixStack.top() == '$' ||getPrecedence(ch)>getPrecedence(postFixStack.top()))
            postFixStack.push(ch);
        else{
            while(postFixStack.top() != '$' && getPrecedence(ch)<getPrecedence(postFixStack.top())) 
            {
                postFix += postFixStack.top(); 
                postFixStack.pop();
            }
            postFixStack.push(ch);
        }
    }
    while(postFixStack.top() != '$')
    {
        postFix += postFixStack.top(); 
        postFixStack.pop();
    }
    return postFix;
}