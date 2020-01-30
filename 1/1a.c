#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 

	// make two process which run same 
	// program after this instruction 
	pid_t pid = fork();
	if (pid == 0){
		printf("Hello from Child\n"); 
	}
	else
		printf("Hello from Parent\n");
	return 0; 
} 

