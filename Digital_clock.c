#include <stdio.h>
#include <windows.h>

int main()
{
    int h,m,s;
    int d=1000;     //we add a delay of 1000 milliseconds and we use it in the function sleep
    printf ("set time : \n");
    scanf ("%d%d%d",&h,&m,&s);
    
    if (h>12 || m>60 || s>60)
    {
        printf ("ERROR ! \n");
    }
    while(1)        // this is an infinite loop and everything inside will repeat itself to infinty
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock :");
        printf ("\n %02d:%02d:%02d",h,m,s);     // This writes our time in this format 00:00:00
        Sleep(d);   // the function sleep slows down the while loop and make it more like a real clock
        system("cls");      //this function clears the screen
    }
    return 0;
}