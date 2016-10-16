// Prints out every possible Cut that could be a master key for a given bitting with (n) depths
// no error checking added yet.
// compile with: gcc -std=c99 main.c
// 6-8-2016
// JM
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {


    if(argc != 3) {
        printf("Usage: %s bitting depths - where bitting is a 5 or 6 digit number and depths can be from 3-9\n",argv[0]);
        exit(0);
    }

    int bitting_len = strlen(argv[1]);
    int depths = strtol(argv[2],NULL,10);
    char bitting[bitting_len];
    char temp[bitting_len];
    char c;

    if(depths < 3 || depths > 9) {
        puts("must have at least 3 and no more than 9 depths");
        exit(0);
    }

    if(bitting_len < 5 || bitting_len > 8) {
        puts("Put between 5 and 8 spaces");
        exit(0);
    }

    strncpy(bitting,argv[1],bitting_len);
    strncpy(temp,bitting,bitting_len);

    printf("Bitting: %d spaces and %d depths",bitting_len,depths);

for(int a=0; a<bitting_len; a++) {
    for(int b=1; b<depths+1; b++) {
        temp[a] = b + '0';
        puts(temp);
}
strncpy(temp,bitting,bitting_len);
}

exit(0);

}
