#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{
    char wifiProfile[MAX_LEN];
    system("netsh wlan show profiles");
    printf("Enter the WiFi profile name: ");
    if (fgets(wifiProfile, sizeof(wifiProfile), stdin) == NULL)//getting user input
    {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    
    char *newline = strchr(wifiProfile, '\n');// Remove newline character from the end of the input
    if (newline != NULL) 
    {
        *newline = '\0';
    }
    char command[MAX_LEN * 2];
    sprintf(command, "netsh wlan show profiles name=\"%s\" key=clear", wifiProfile);
    system(command);

    return 0;
}
