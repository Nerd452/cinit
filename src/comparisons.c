#include "Headers/comparisons.h"



/*                                                                                                                 
 * compares the first "String" (arg1) to the second "String" (arg2)                                           
 * returns 1 if they are equal, and 0 if they are not  
 */  
int strComp(char arg1[], char arg2[]){
    
    int i = 0;

    for (i = 0; arg1[i] != '\0' && arg2[i] != '\0'; i++) {
        
        if (arg1[i] == '\0' || arg2[i] == '\0') {
            return 0;        
        }

        if (arg1[i] != arg2[i]) {
            return 0;
        }
    

    }

    return 1;
}


