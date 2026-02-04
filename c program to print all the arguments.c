#include<stdio.h>
int main (int argc , char *argv[]){
    int i;
    printf("Total Arguments: %d\n",argc);
    for(i=0;i<argc;i++){
            printf("Arguments %d: %s\n",i,argv[i]);
    }
    return 0;
}

