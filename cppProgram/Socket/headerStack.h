#include<iostream>



#define STACK_SIZE 10
using namespace std;
class stackClass{


public:
		stackClass()
		{
			cout << "default Constructor Called"<<endl;
	
		}

private:

	int top;

	int stack[STACK_SIZE];
};


