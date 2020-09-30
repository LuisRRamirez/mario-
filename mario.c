#include <stdio.h>

int main(void)
{
    // initialize every word I use 
    int height;
    int spaces;
    int noOfHashes;
    int i;
    int j;
    // height is stored when scanf is inputed  
    // the do/while loop is to make sure that the user only inputs numbers between 1-8 
    do
    {
        printf ( "Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);
    // the problem is to make a stair-like blocks
    // I need a row of spaces and dashes so first I ask but i need multiple rows 
    // the first for loop is to for the multiple rows 
    for (i = 1 ; i <= height ; i++)
    {
        
        // these two for loops is where the real code is at 
        // if i have a vaue of 4, in the first loop, i=1, the second condition is met and a space is made
        // spaces++ loops this for loop until the second condition isn't met 
        for (spaces = i; spaces < height; spaces++)
        { 
            printf(" "); 
            
        }
            
        noOfHashes = height - i;
        // this second loops always had a hash at the end of the staircase 
        // as i increases from the first loop, the number of hashes decreases, so there's more hashes the more rows you go down 
        for (j = noOfHashes; j < height; j++)
        { 
            printf("#");
            
        }
           
        printf("\n");
    }
}
    