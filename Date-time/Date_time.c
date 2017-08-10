#include <time.h>
#include <stdio.h>  
#include <stdlib.h>

int main(void)
{
    time_t curtime;
    char* curtstring;
    curtime = time(NULL);
    if (curtime == ((timet)-1))
    {
        (void) fprintf(stderr, "Failure to get the current time.\n");
        exit(EXIT_FAILURE);
    }
    curtstring = ctime(&curtime); 
    if (curtstring == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }
    (void) printf("\n The Current time is : %s \n", curtstring);
    exit(EXIT_SUCCESS);
}
