/* Demo for returning array using structures*/

#include <stdio.h> 
  
struct arrWrap { 
				    int arr[100]; 
}; 
  
struct arrWrap fun() 
{ 
				    struct arrWrap x; 
						  
						    x.arr[0] = 10; 
								    x.arr[1] = 20; 
										  
										    return x; 
} 
  
int main() 
{ 
				    struct arrWrap x = fun(); 
						    printf("%d %d\n", x.arr[0], x.arr[1]); 
								    return 0; 
}
