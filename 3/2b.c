#include<stdio.h> 
#include <fcntl.h> 
int main() 
{ 
  int fd, sz; 
  char *c = (char *) calloc(100, sizeof(char)); 
  
  fd = open("file.txt", O_RDONLY); 
 
  sz = read(fd, c, 0777); 
  printf("called read(% d, c, 10). it returned"
         " %d bytes.\n", fd, sz); 
  c[sz] = '\0'; 
  printf("Those bytes are as follows: % s\n", c); 
} 

