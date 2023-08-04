/*Demo for call back mechanism using function pointers */
#include <stdio.h>

typedef void (*cb_fn_ptr)(int a); // for passing callback in the structure decleration of B
void cb_register(cb_fn_ptr cb); // here we are registering the function myFunc

void cb_register(cb_fn_ptr cb)
{
				// In this function B can store the address in a structure member
				printf("InSide Call back register\n");
}

void myFunc(int a) 
{
	printf("inside myFunc function for call back example a = %d\n", a);
	//return 'H';
}

struct s_B {
				    cb_fn_ptr cb;
						    // cb will have address whenever B 
};

int main()
{
		struct s_B temp;
	  char ret_val;
		int arg_val = 20;
		temp.cb = myFunc; // store the functon address in the function pointer
		cb_register(temp.cb); //Registering the Call Back
	  //ret_val = temp.cb(arg_val); function callback
	  temp.cb(arg_val); //This is function call back callback, because myFunc is regitered
		printf("%c\n", ret_val);
		return 0;
}
