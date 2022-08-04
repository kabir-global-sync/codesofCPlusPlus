#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    cout<<"Enter your word::";
    cin>>word;
    int size=word.length();
    for(int i=0;i<size;i++){
        word=word[size-1]+word.substr(0,size-1);
        cout<<word<<endl;
    }
    return 0;
}