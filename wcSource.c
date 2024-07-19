#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wcHeader.h"
int main(int argc , char* argv[])
{
    FILE *file;
    file=NULL;
    int i;
    tot *total;
    total = (tot*)malloc(sizeof(tot)*argc);
    for(i = 1 ; i<argc ; i++)
    {    
        if(strcmp(argv[1] , "-c") == 0)
        {
            open(file , argv[i+1]);
            wc_option_c(file , argv[i+1] ,total);
            print_total_c(total ,argc);
            if(file != NULL)
            {
                fclose(file);
                }
        }
        if(strcmp(argv[1] , "-l") == 0)
        {
            open(file , argv[i+1]);
            wc_option_l(file , argv[i+1] ,total);
            print_total_l(total ,argc);
            if(file != NULL)
            {
                fclose(file);
                }        
            }
        if(strcmp(argv[1] , "-w") == 0)
        {
            open(file , argv[i+1]);
            wc_option_w(file , argv[i+1] ,total);
            print_total_w(total ,argc);
            if(file != NULL)
            {
                fclose(file);
                }
        }
        
        if(strcmp(argv[1] , "-L") == 0)
        {
            open(file , argv[i+1]);
            wc_option_L(file , argv[i]);
            if(file != NULL)
            {
                fclose(file);
                }  
            }
            
        if(strcmp(argv[1] , "--help") == 0)
        {
            wc_help(file);
            }
            
        if(strcmp(argv[1] , "-c") != 0 || strcmp(argv[1] , "-w") != 0 || strcmp(argv[1] , "-l") != 0  ||   strcmp(argv[1] , "-L") != 0  ||  strcmp(argv[1] , "--help") != 0)
        {
            open(file , argv[i]);
            word_count(file , argv[i] ,total);
            print_total(total ,argc);
           if(file != NULL)
            {
                fclose(file);
                }
        }
        
        if(argc == 1)
        {
            wc_no_opt(file);
            }
    }
}













