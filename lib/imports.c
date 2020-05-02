#include <emscripten.h>
#include <stdio.h>

EM_JS(void, jsFunction, (int n), {
    console.log("Call from EM_JS: " + n);
});

int main()
{
    printf("WASM ready - Testing with Emscripten.\n");

    emscripten_run_script("console.log('Hello from C!')");

    emscripten_async_run_script("console.log('Hello from C! ASYNC')", 2000);

    int jsVal = emscripten_run_script_int("getNum()");
    char * jsValStr = emscripten_run_script_string("getStr()");

    printf("Val from getNum(): %d\n", jsVal);
    printf("Val from getNum(): %s\n", jsValStr);

    jsFunction(144);

    return 1;
}