#include <stdio.h>

#include "cstring.h"

int main() {

    String str = createStringExt("HalloHalloWieHalloMiHalloGehtsSuper");

    printf("%s\n", containsString(str, " ") ? "true" : "false");

    freeString(str);

    return 0;
}
