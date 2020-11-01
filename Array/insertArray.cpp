#include <iostream>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int i,n=6,k=2;
    int array[n];

    //initialization of an array
    
    for(i=0; i<6; i++)
        cin>>array[i];

    cout<<"these are the array element:\n";
    for(i = 0; i<6; i++)
        cout<<array[i]<<endl;

    //creating the space for element
    n=i+1;
    int j = n;
    while(j>=k){
        array[j+1]=array[j];
        j--;
    }

    //inserting the element

    array[k] = 100;
    
    //printing the element after insertion

    for(i=0; i<n; i++)
        cin>>array[i];

    cout<<"these are the array element:\n";
    for(i = 0; i<n; i++)
        cout<<array[i]<<endl;
        
}