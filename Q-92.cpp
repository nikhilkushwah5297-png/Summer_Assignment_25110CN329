#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    char ch;
    int max=0;
    for(int i=0;i<s.length();i++) {
        int count=0;
        for(int j=0;j<s.length();j++) {
            if(s[i]==s[j])
                count++;
        }
        if(count>max) {
            max=count;
            ch=s[i];
        }
    }
    cout<<"Maximum Occurring Character = "<<ch;
    return 0;
}