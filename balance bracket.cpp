//Check whether the given string of brackets is consistent.

#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

bool isOpen( char c ){
    if(c == '(' || c == '{' || c == '[')
        return true;
    return false;
}

bool isBalanced(char popped, char now ){
    if(popped == '(' && now ==')')
        return true;
    if(popped == '[' && now ==']')
        return true;
    if(popped == '{' && now =='}')
        return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        stack<char> s;
        string str;
        cin >> str;
        int flag = 0;
        for( int i=0; i<str.length(); i++ ){
            char now = str[i];
            if( isOpen(now) ) s.push(now);
            else{
                char popped;
                if( s.size()>0 ){
                    popped = s.top();
                    s.pop();
                }
                else{
                    flag=1;
                    break;
                }
                if( isBalanced(popped, now)) continue;
                else
                {
                    flag=1;
                    break;
                }
                
            }
        }
        if(s.size() != 0)
            flag = 1;
        if(flag)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
