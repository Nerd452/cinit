#include "Headers/comparisons.h"
#include <stdio.h>

//predeclarations
int strCompTest();



int strCompTest(){
    
    if(!strComp("hello","hello")){
        return 0;
    } else if(strComp("Hello","hell")){
        return 0;
    } else if (strComp("f","g")) {
        return 0;
    } else if(!strComp("H","H")){
        return 0;
    } else if(!strComp("Super Duber","Super Duber")){
        return 0;
    } else{
        return 1;
    }
}



int main(int argc, char *argv[]){

    if(strCompTest()){
        printf("strCompTest: PASSED\n");
    }else{
        printf("strCompTest: FAILED\n");
    }


}
