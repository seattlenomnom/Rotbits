/* sourcefile for rotbits
 *
 * DESCRIPTION:
 * rotbits is a fancier version of program 11.3 of Kochan, Stephan,
 * "Programming in C 4th ed."
 *
 * Notes:
 * make this a fast project; 1. get input through scanf() and not from the
 * command line, 2. make it a simple, direct demo of >> and <<.
 *
 * DESIGN:
 *
 * INPUT:
 *
 * DESIGN:
 *
 * input:
 * prompt for number. unsigned char 8 bits.
 *
 * process:
 *  loop
 *      prompt for direction -> lL, rR, qQ (quit)
 *      switch on response
 *          lL -> byte << 1
 *          rR -> byte >> 1
 *          qQ -> exit(0)
 */




/* includes */

#include <stdio.h>
#include <stdlib.h>








/* defines */











/* structure defines */







/* function declarations */





int main(int argc, char *argv[]){

    unsigned int theInt, numBits;

    theInt = 0;
    numBits = 0;
    char control;

    control = 'y';



    /* input number and shift size(in bits) */

    while(control != 'n'){
        printf("enter a number in hex: ");
        scanf("%x", &theInt);
        printf("\n");
        printf("enter the number of bit to shift: ");
        scanf("%i", &numBits);
        printf("\n");
        printf("%x right shift\n", theInt >> numBits);
        printf("continue (y/n)");
        scanf("%c", &control);
    }

    printf("\n");




    return(0);
}


/* function definitions */












