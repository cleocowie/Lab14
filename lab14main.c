/** labXX.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: 
* Purpose: 
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab14fbFuncts.h"
#include "lab14functs.h"

int main (void) {
    int attempts[MAXPLAYERS];
    int yards[MAXPLAYERS];
    int touchdowns[MAXPLAYERS];
    int value;
    int maxIndex;
    int index;
    char playername[100];
    double index2;


    value=readData(attempts, yards, touchdowns);

    printf("%d players data read.\n",value);

    strcpy(playername,getPlayerName(0));
    printf("The player ID 0 is %s and he scored %d touchdowns in 2017.\n",playername,touchdowns[0]);

    strcpy(playername,getPlayerName(122));
    printf("The player ID 122 is %s and he rushed for %d yards in 2017.\n",playername,yards[122]);


    maxIndex=findMaxIndex(yards);
    strcpy(playername,getPlayerName(maxIndex));
    printf("The player with the most yards in 2017 is %s and he had %d.\n",playername,yards[maxIndex]);

    maxIndex=findMaxIndex(touchdowns);
    strcpy(playername,getPlayerName(maxIndex));
    printf("The player with the most TDs in 2017 is %s and he had %d.\n",playername,touchdowns[maxIndex]);

    
    index=numPlayerOverX(touchdowns,10);
    printf("The number of players with more than 10 TDs in 2017 is %d.\n",index);

    index=numPlayerOverX(yards,1000);
    printf("The number of players with more than 1000 yards in 2017 is %d.\n",index);

    index=numPlayerOverX(attempts,100);
    printf("The number of players with more than 100 attempts in 2017 is %d.\n",index);

    maxIndex=getMaxYardsPerCarryIndex(yards,attempts,100);
    index2=getMaxYardsPerCarry(yards,attempts,100);
    strcpy(playername,getPlayerName(maxIndex));
    printf("The player with the most yards per carry (>100 attempts) is %s and he had %.1lf.\n",playername,index2);

    maxIndex=getMaxYardsPerCarryIndex(yards,attempts,50);
    index2=getMaxYardsPerCarry(yards,attempts,50);
    strcpy(playername,getPlayerName(maxIndex));
    printf("The player with the most yards per carry (>50 attempts) is %s and he had %.1lf.\n",playername,index2);


    maxIndex=getMaxYardsPerCarryIndex(yards,attempts,10);
    index2=getMaxYardsPerCarry(yards,attempts,10);
    strcpy(playername,getPlayerName(maxIndex));
    printf("The player with the most yards per carry (>10 attempts) is %s and he had %.1lf.\n",playername,index2);

    

    return 0;
}