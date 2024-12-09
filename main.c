#include <stdio.h>

#include "cstring.h"

int main() {

    String str = createStringExt("HalloHalloWieHalloMiHalloGehtsSuper");

    removeSymbols(&str, "Hallo");
    printf("%s\n", str.s);

    freeString(str);

    return 0;
}
