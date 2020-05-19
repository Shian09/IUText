
#include<iostream>
#include<cstdio>
#include<string>
#include<string.h>
using namespace std;
char *strtochar(string s)
{
    int n = s.length();
    char char_array[1000];
    strcpy(char_array, s.c_str());
    char *str = (char *) malloc(sizeof(char_array));
    str=char_array;
    return str;
}

string chartostr(char *x)
{
    string s=x;
    return s;
}
