/*
 * sample_fork.c
 * This program will create 5 fork process to check if pokemon exists
 * in the array. Will print which fork process found the pokemon.
 */
#include <sys/types.h>
#include <sys/wait.h>
#include "errors.h"

int main (int argc, char *argv[])
{
    printf("Initializeing the pokemon array!\n");

    int status;
    char line[20];
    pid_t pid1, pid2, pid3, pid4, pid5;
    char message[64];
    char ch_arr[5][10] = {
                         "Pikachu",
                         "Bulbasur",
                         "Squirtle",
                         "Charmander",
                         "Eevee"
                     };

    while(1){
        printf("Please enter a pokemon to search: ");
        if(fgets(line, sizeof(line), stdin)==NULL){
            exit(0);
        }
        if(strlen(line)<=1){
            continue;
        }
        //string scanf
        if(sscanf(line, "%20[^[A-Z]\n", message)<1){
            fprintf (stderr, "Bad command\n");
        }else{
            printf("Worked!");
        }
    }

    return 0;

}