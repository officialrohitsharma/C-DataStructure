#include <iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int i=0, n=6, k=4, array[n];

    //initialization of array

    for(i=0; i<n; i++)
        cin>>array[i];

    //taking the element for search;

    k = 110;
    i=0;

    //searching the array element

    while(i<n){
        if(array[i]==k){
            cout<<"element "<<k<<" found at position "<<i+1;
            break;
        }
        i++;
    }

    //if element not found
    
    if(i==n)
        cout<<"element not found";

    return 0;
}
