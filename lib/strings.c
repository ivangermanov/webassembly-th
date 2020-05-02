#include <emscripten.h>
#include <stdio.h>

char *str = "my string variable";

char *getStr()
{
    return str;
}

int getNumber()
{
    int num = 22;

    if (num < 30)
    {
        emscripten_log(EM_LOG_WARN, "'num' less than 30");
    }

    return num;
}

int main()
{
    printf("WASM ready - Testing with Emscripten.\n");

    return 1;
}