#include <iostream>
using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #endif

    //creating variable and array

    int i = 0, k = 50, n = 6, array[n];

    for(i = 0; i<6; i++)
        cin>>array[i];

    //getting the element for update

    int updateElement = 1110;        

    //updating the element

    for(i=0; i<n; i++){
        if(array[i]==k){
            array[i]=updateElement;
            break;
        }
    }

    if(i == n)
        cout<<"Couldn't update! No element Found";

    //printing the element
    for(i=0; i<n; i++)
        cout<<"\n"<<array[i];

    return 0;
}