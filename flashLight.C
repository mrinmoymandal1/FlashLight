#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    while (1)
    {
        if (kbhit())
        {
            getch();
            break;
        }
        system("color 0f");
        
        Sleep(500);
        system("color f0");
        Sleep(500);
    }
    system("color 07");
    printf("\nFlashlight turned off!");
    return 0;
}
