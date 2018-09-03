/* user.c - main */

#include <conf.h>
#include <kernel.h>
#include <proc.h>
#include <stdio.h>
#include "lab0.h"
/*------------------------------------------------------------------------
 *  main  --  user main program
 *------------------------------------------------------------------------
 */
int main()
{
        kprintf("\n\nProgramming Assignment 0\n\n");
        kprintf("\n\t\t****Task 1****\t\t\n");
        kprintf("\n\tZfunction(0xaabbccdd) --> 0x%x\n", zfunction(0xaabbccdd));
        printsegaddress();

        return 0;
}
