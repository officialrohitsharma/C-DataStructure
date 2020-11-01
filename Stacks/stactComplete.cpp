#include<iostream>

using namespace std;

class Stack{
	int top = -1;
	int stackArray[5];
	
	public: 
	
		Stack(){
			for(int i = 0; i < 5; i++){
				stackArray[i] = 0;
			}
		}
		
		void stackInput(){
			cout<<"\nEnter the 5 values in the stack\n";
			for(int i = 0; i < 5; i++){
				cin>>stackArray[i];
			}
			cout<<"vlaues has been stored in the Stack\n";
		}
		
		void displayStack(){
			cout<<"The values in the stack\n";
			for(int i = 4; i >= 0; i--){
				cout<<stackArray[i]<<"\n";
				top++;
			}
		}
		int pop(){
			if(top == -1){
				cout<<"\nStack is underflow";
				return 0;
			}
			else{
				int element = stackArray[top];
				top--;
				return element;
			}
		}
		void push(int val){
			if(top > 5){
				cout<<"\nStack is overflow";
			}
			else{
				top++;
				stackArray[top] = val;
				cout<<"\nValue has been stored in the stack";
			}
		}
};

int main(){
	Stack s1;
//	s1.stackInput();
	s1.displayStack();
	s1.pop();
	s1.push(200);
	s1.displayStack();
	return 0;
}
