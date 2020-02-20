#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
int main( int argc,char *argv[3] )
{

if (remove(argv[1]) == 0) 
      printf("Deleted successfully");
else
      printf("Unable to delete the file");
}

