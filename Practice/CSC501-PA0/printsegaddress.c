
#include <stdio.h>
extern int etext,edata,end;

/*----------------------------------------------------------------------------------------------
 *  *  printsegaddress  -  print address indicating the end of text, data, and BSS(end) segments
 *   *---------------------------------------------------------------------------------------------
 *    */ /*As per the man pages at https://linux.die.net/man/3/etext
                                  these segments should be explicitly declared and not defined
                                  in any header files*/

void printsegaddress() {

        char *etxt =
        printf("\n\t\t****Task 2****\t\n");
        printf("\n\t1. Current addresses:");
        printf("\n\t\ta. eText : 0x%08x",&etext);
        printf("\n\t\tb. eData : 0x%08x",&edata);
        printf("\n\t\tc. BSS(end) : 0x%08x",&end);

        int numOfBytes = 4

        printf("\n\t1. Current addresses:");
        printf("\n\t\ta. eText : 0x%08x",&etext);
        printf("\n\t\tb. eData : 0x%08x",&edata);
        printf("\n\t\tc. BSS(end) : 0x%08x",&end);


        printf("\n\t1. Current addresses:");
        printf("\n\t\ta. eText : 0x%08x",&etext);
        printf("\n\t\tb. eData : 0x%08x",&edata);
        printf("\n\t\tc. BSS(end) : 0x%08x",&end);
}
~
