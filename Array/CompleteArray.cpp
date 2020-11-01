#include <iostream>

using namespace std;

// Inserting a element in the given array

void insertElement(int array[], int n, int pos, int element){

    int l = n;
    n+=1;

    while((pos-1)<n){
        array[n]= array[n-1];
        n--;
    }

    array[pos-1] = element;
    cout<<"The resultant array is: ";

    for(int i=0; i<l+1; i++)
        cout<<endl<<array[i];

}

//searching the element in the given array

void searchElement(int array[], int n, int element){
    int flag = 0;

    for(int i=0; i<n; i++){
        if(array[i] == element){
           flag = i+1;
            break;
        }
    }

    if(flag != 0)
        cout<<"Element is found at position: "<<flag;
    else
        cout<<"Sorry! Element is not present";

}

//updating the element in the given array

void updateElement(int array[], int n, int pos, int element){
        
    for(int i=0; i<n; i++){
        if((pos-1)==i){
            array[i] = element;
            break;
        }
    }

    cout<<"The updated array are: "<<endl;
    for(int i=0; i<n; i++)
        cout<<array[i]<<endl;

}

//deleting the element in the given array

void deleteElement(int array[], int n, int element){
    int l = n, flag = 0;

    for(int i=0; i<l; i++){
        if(array[i] == element){
            for(int j=i; j<l; j++)
                array[j] = array[j+1];
            flag +=1;
        }
    }

    l = l - flag;

    cout<<"The updated array are: "<<endl;
    for(int i=0; i<l; i++)
        cout<<array[i]<<endl;

}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 10;
    int array[n];

    for(inti=0; i<n; i++)
        cin>>array[i];

    return 0;
}