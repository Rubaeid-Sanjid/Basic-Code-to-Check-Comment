#include <bits/stdc++.h>
using namespace std;

void commentChecker(string comment){
    for(int i = 0; i<=comment.length(); i++)
    {
        if(comment[i] == '/' && comment[i+1] == '/')
        {
            cout<<"It is a single line comment.";
            break;
        }
        else if(comment[i] == '/' && comment[i+1] == '*')
        {
            cout<<"It is a multi-line comment.";
            break;
        }
        else{
            if(i == comment.length())
            {
                cout<<"Not a valid comment.";
                break;
            }
        }
    }
}

int main(){
    string comment;
    cout<<"Enter your line: "<<endl;
    getline(cin, comment);

    commentChecker(comment);

    return 0;
}
