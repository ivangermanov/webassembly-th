#include <stdio.h>
#include <string.h>

int main()
{
    printf("WASM ready - Testing with Emscripten.\n");
    return 1;
}

int getNUM()
{
    return 22;
}

int getDoubleNum(int n)
{
    return n * 2;
}

char *greet(char *name)
{
    char *greeting = "Hello, ";
    strcat(greeting, name);
    return greeting;
}