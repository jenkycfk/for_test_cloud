#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <cstring>
 
int main () {
void *ptr[100];
    int max_loop=10;
    int mem_size=1024*1024*100;//100M
    for (int i =0; i<max_loop; i++) {
        ptr[i] = (char *) malloc(mem_size);
        std::cout << i << " " <<  ptr[i] << std::endl;
    }
    while(1) {
        for (int i =0; i<max_loop-1; i++) {
            memcpy(ptr[i], ptr[i+1], mem_size);
        }
        sleep(1);
    }
    for (int i =0; i<max_loop; i++) {
        free(ptr[i]);
    }
    return(0);
}
