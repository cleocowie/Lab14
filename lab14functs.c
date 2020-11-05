/** labXX.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: 
* Purpose: 
* ===========================================================
*/

#include "lab14functs.h"
#include "lab14fbFuncts.h"
#include <string.h>

int findMaxIndex(int array[]) {
    int i;
    int max;
    max=array[0];
    int maxIndex;

    for (i=0;i<316;i++) {
        if (array[i]>max) {
            max=array[i];
            maxIndex=i;
        }
    }

       return maxIndex;
} 

int numPlayerOverX(int array[],int threshold) {
    int i;
    int count=0;
    
    for (i=0;i<316;i++) {
        if (array[i]>threshold) {
            count=count+1;
        }
    }
        return count;
}

int getMaxYardsPerCarryIndex(int array[],int array2[],int attempts) {
    int i;
    int maxIndex;
    double max=0;

    for (i=0;i<316;i++) {

        if (array2[i]>attempts) {

            if (((double)array[i]/(double)array2[i])>max)   {
            max=((double)array[i]/(double)array2[i]);
            maxIndex=i;

            }
        }
    }

    return maxIndex;
}

double getMaxYardsPerCarry(int array[],int array2[],int attempts) {
    int i;
    double max=0.0;

    for (i=0;i<316;i++) {

        if (array2[i]>attempts) {

            if (((double)array[i]/(double)array2[i])>max)   {

            max=((double)array[i]/(double)array2[i]);
        
            }
        }
    }

        return max;
}