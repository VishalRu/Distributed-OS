//Team members:Vishal Ruhela,Sravya Narala
#include <stdio.h>
#include <stdlib.h>
#include <threads.h>
#include<pthread.h>

int x=0; //global var

void f1()
{
    int i=0;

    	while(1){	

    	printf("Printing from function 1,Value of Local Variable %d\n", i++);
	
    	printf("Printing from Function 1, Value of Global Variable %d\n",x++);
	sleep(1);
	
	yield();
	printf("Line after yield in function 1\n");

		}


}
	

void f2()

{
  
char i='a';

	while(1)
    
		{
	
		printf("Printing from Function 2,Value of Local Variable %c\n", i++);

		printf("Printing from Function 2, Value of Global Variable %d\n",x++);
	
		yield();

		printf("Line after yield in function 2 \n");

		}

}

void f3()

{

int j =0;

	while(1){

	 printf("Printing from function 3, Value of Local Variable %d\n", j++);
	
	 printf("Printing from Function 3, Value of Global Variable %d\n",x++);
	
	sleep(1);

	yield();

	printf("Line after yield in function 3 \n");

	}

}

int main()
 {
	start_thread(&f1);
//	run();
        start_thread(&f2);
      	start_thread(&f3); 
	
      	 run();
    //start_thread(function_3, NULL);

    while(1) sleep(1);

    return 0;
}


