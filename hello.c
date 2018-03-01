#include<stdio.h>

void main(){
  printf("Helloworld!\n");
  printf("This must be a monolithic design\n");
  microkernel_sendmsg("is more portable");
}

void microkernel_sendmsg(char *a){
  print("microkernel:%s\n",a);
}  
