//too long words becoming short

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void toolongwords(string);
int main(){
    int n;
    vector<string> words;
    cin >> n;
    string input;
    for( int i=0 ; i < n ; i++){
        cin >> input;
        words.push_back(input);
    }
    for( auto word : words){
        toolongwords(word);
    }

    return 0;
}
    void toolongwords( string s){
        if(s.length() <= 10){
            cout << s << endl;
            return ;
        }
        cout << s.at(0) + to_string(s.length()-2) + s.at(s.length()-1) << endl;

    }
