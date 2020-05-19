/* directories.h: To create user folders */
#include<cstdio>
void directories(char *name)
{
    char command[1000] = "mkdir ";
    strcat(command, name);
    system(command);
}
