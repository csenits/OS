#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h> 

int main (void){ 
	int f; 
	char buf[16] = "new hello world"; 
	f = open("file.txt", O_WRONLY | O_APPEND, 0777);		 
	write(f, buf, strlen(buf));		 
	close(f); 
	return 0; 
} 
