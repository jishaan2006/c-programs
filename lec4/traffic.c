//traffic light simulator
#include<stdio.h>
int main()
{
    char r,o,g,signal;
    printf("Enter colour of traffic light:\nred=r\norange=o\ngreen=g\n");
    scanf("%c",&signal);
    switch(signal)
    {
        case 'r':printf("STOP");
        break;
         case 'o':printf("WAIT");
        break;
         case 'g':printf("GOO");
        break;
        default:printf("Invalid colour");
    }

}


