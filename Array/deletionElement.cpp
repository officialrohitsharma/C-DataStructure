#include <iostream>
using namespace std;

int main(){
    //definition for file

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //declaring of variable and array;

    int i, n = 6, j = n, k = 3;
    int array[n];

    //initialization of array

    for(i=0; i<n; i++)
        cin>>array[i];

    //printing the array before deleting the element

    cout<<"\nThe array elements are:"<<endl;

    for(i=0; i<n; i++)
        cout<<"\n"<<array[i];

    //deleting the element from given postion

    while(k<=n){
        array[k]=array[k+1];
        k++;
    }

    //reducing the array size

    n=n-1;

    //printing the array after deleting
    cout<<"\nThe array elements are after deletion:"<<endl;
    for(i=0; i<n; i++)
        cout<<"\n"<<array[i];

    return 0;
}