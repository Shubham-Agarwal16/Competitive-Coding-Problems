#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string su;
    cin>>su;
    transform(su.begin(), su.begin()+1, su.begin(), ::toupper); 
    cout << su << endl; 
}
