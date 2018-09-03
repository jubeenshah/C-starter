/*printsegaddress.c - printing address of segments (Task 2)*/

#include <stdio.h>
extern int etext,edata,end;

/*----------------------------------------------------------------------------------------------
 *  *  printsegaddress  -  print address indicating the end of text, data, and BSS(end) segments
 *   *---------------------------------------------------------------------------------------------
 *    */ /*As per the man pages at https://linux.die.net/man/3/etext
                                  these segments should be explicitly declared and not defined
                                  in any header files*/

void printsegaddress() {

        printf("\n\t\t****Task 2****\t\n");
        printf("\n\t1. Current addresses:");
        printf("\n\t\ta. eText : 0x%08x",&etext);
        printf("\n\t\tb. eData : 0x%08x",&edata);
        printf("\n\t\tc. BSS(end) : 0x%08x",&end);

        //int address_Txt = (int *)&etext;
        //int address_dta = (int *)&edata;
        //int address_end = (int *)&end;
        printf("\n\t2. Previous addresses:");
        printf("\n\t\ta. eText : 0x%08x",*((int *)&etext - 1));
        printf("\n\t\tb. eData : 0x%08x",*((int *)&edata - 1));
        printf("\n\t\tc. BSS(end) : 0x%08x",*((int *)&end - 1));


        printf("\n\t3. Next addresses:");
        printf("\n\t\ta. eText : 0x%08x",*((int *)&etext + 1));
        printf("\n\t\tb. eData : 0x%08x",*((int *)&edata + 1));
        printf("\n\t\tc. BSS(end) : 0x%08x",*((int *)&end + 1));
}
