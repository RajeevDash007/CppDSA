#include<iostream>
#include<stack>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixtopostfix(string s){
    stack<char>st;
    string res;

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i])
    }
}

int main(){



return 0;
}