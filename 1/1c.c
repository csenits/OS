// C program to illustrate use of fork() & 
// exec() system call for process creation 

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <sys/wait.h> 

int main(){ 
pid_t pid = fork(); 
if (pid == 0){ 

	printf("child process, pid = %u\n",getpid()); 
	char* arr[] = {"ls", "-l", "-R", "-a", NULL};
	execv("/bin/ls", arr);
	exit(0);
} 
else{ 

	printf("parent process, pid = %u\n",getppid()); 
		
} 
return 0; 
} 

