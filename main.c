#include <stdio.h>

#include "cstring.h"
#include "string.h"

int main() {


    int num = 30000;
    float fl = 3.5;

    const char * s = "=";

    for ( int i = 0; i < 10; i++ ) {
        String str = c_str_printf("%d + %f %s %f", num, fl, s, num + fl);
        printf("%s\n", str.s);
        freeString(str);
    }

    return 0;
}
