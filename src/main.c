#include <stdio.h>
#include "Headers/comparisons.h"

int main(int argc,char *argv[])
{
    //initialization
    int argNum = argc - 1; //argc - 1 to get the number of arguments after the command


    if(argNum == 0){ //if no arguments have been passed
        fprintf(stderr, "Error: no input given\nUsage: cinit COMMANDFLAG [arguments]\n");
        return 1;
    }



    if(   strComp(argv[1], "-cli") || strComp(argv[1], "-c")  ){
        printf("NOT IMPLEMENTED\n");
    }


    else if ( strComp(argv[1], "-h") || strComp(argv[1], "help")) {
        printf("NOT IMPLEMENTED");

    } else{

    }

    return 0;
}
