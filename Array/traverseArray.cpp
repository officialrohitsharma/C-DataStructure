#include <iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int LA[5];
    int i;
    for(i=0; i<5; i++){
        cin>>LA[i];
    }
    cout<<"The Elements of an Array are:";
    for(i=0; i<5; i++){
        cout<<LA[i];
    }
}