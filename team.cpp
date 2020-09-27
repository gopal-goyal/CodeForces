#include<iostream>
using namespace std;


int main(){
    int n , toBeSubmitted = 0 , a ,b ,c;
    cin >> n;
    for(int i = 0 ; i < n ; i++ ){
        cin >> a >> b >> c;
        if(a==1 && b==1 || a==1 && c==1 || c==1 && b==1){
            toBeSubmitted++;
        }
    }
    cout << toBeSubmitted << endl;

    return 0;
}
