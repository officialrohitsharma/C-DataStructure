#include<iostream>
#include<stdio.h>
#include<array>
using namespace std;

#define MAXSIZE 10;

struct ArrayStack{
    int top;
    int capacity;
    int *array;
};

struct ArrayStack *CreateStack(){
    struct ArrayStack *S = malloc(sizeof(struct ArrayStack));
    if(!S)
        return NULL;
    S -> capacity = MAXSIZE;
    S -> top = -1;
    S -> array = malloc(S -> capacity *sizeof(int));

    if(!S -> array)
        return NULL;
    return S;
}

int IsEmptyStack(struct ArrayStack *S){
    return(S -> top == -1);
}

int IsFullStack(struct ArrayStack *S){
    return (S -> tio == S -> capacity - 1 );
}

void push(struct ArrayStack *S, int data){
    if(IsFullStack(S))
        printf("Stack Overflow");
    else
        S -> array[++S -> top] = data;
}

int pop(struct ArrayStack *S){
    if(IsEmptyStack(S)){
        printf("Stack is empty");
        return INT_MIN;
    }
    else
        return (S -> array[S -> top--]);
}

void DeleteStack(struct DynArrayStack *S){
    if(S){
        if(S -> array)
            free(S -> array);
        free(S);
    }
}

void main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        struct ArrayStack array1;
        array1 -> array[5] = {10,20,30,40,50}; 

}