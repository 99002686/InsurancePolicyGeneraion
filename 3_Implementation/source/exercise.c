#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void* exercise(struct points* ex, char a, int in)
{
    int flag=0;
    char sheet3,sheet4;
    if(!in)
    {
        flag=1;
        sheet4 = a;
    }
    if(in)
    {
        printf("\n Do you do exercise(y/n) ? ");
        scanf(" %c", &sheet3);
    }
    if(sheet3 == 'y' || sheet3 == 'Y')
    {
        flag=1;
        if(in)
        {
            printf("\n Which of the following exercise you do?(Enter Your Choice.)\n a) Yoga.\n b) Gym.\n c) Jogging.\n\t Ans--");
           scanf(" %c",&sheet4);
        }
    }
    else
    {
        strcpy(ex->exercise,"NULL");
        ex->score -= 0.5;
    }

    if(flag==1)
    {
        switch(sheet4)
        {
        case 'a':
            strcpy(ex->exercise,"YOGA");
            break;
        case 'b':
            strcpy(ex->exercise,"GYM");
            break;
        case 'c':
            strcpy(ex->exercise,"JOGGING");
            break;
        }
    }
    if(!in)
    {
        if(sheet4 == 'a' || sheet4== 'b' || sheet4 == 'c')
        {
            return ex->exercise;
        }
    }
    return 0;
}
