#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>



int isJollyJumber(const int seq[], int size) {

/* creates a boolean array to store true if a difference is found. The true is stored in the place, that is the value of the difference */
bool diffs_found[size]; 
diffs_found[0] = true;
/* initializes diffs_found to set every place to false */
 /* all */
for (int k = 1; k < size; k++) {
    diffs_found[k] = false;
}

for (int i = 0; i < size; i++) {
    int x = 0;
    x = seq[i] - seq[i+1];
    if (abs(x) <= size)
        diffs_found[abs(x)] = true;
}    

for (int j = 0; j < size; j++) {
    if (diffs_found[j] == false)
        return 0;
}

    return 1;

/*post: answer to exercise 7.a*/
}

