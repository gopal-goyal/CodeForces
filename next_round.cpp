#include<iostream>
using namespace std;

int main(){
    int n,k , nextRound = 0;
    cin >> n;
    cin >> k;
    int points[n];
    for(int i = 0; i<n ; i++){
        cin >> points[i];
    }
    for(int i =0; i<n ; i++){
        if(points[i] >= points[k-1] && points[i] > 0){
            nextRound++;
        }
    }

    cout << nextRound;


    return 0;
}
