#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h> 

int main (void){ 
	int f; 
	char buf[12] = "hello world"; 
	f = creat("file.txt", O_RDWR);		 
	write(f, buf, strlen(buf));		 
	close(f); 
	return 0; 
} 
