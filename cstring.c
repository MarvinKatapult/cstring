#include "cstring.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

static char sprintf_buffer[C_STRING_SPRINTF_BUF_SIZE];

String createString() {
    String str;

    str.s = calloc(C_STRING_DEFAULT_CAP, sizeof(char));
    str.cap = C_STRING_DEFAULT_CAP;

    return str;
}

String createStringExt(const char * s) {
    String str;
    str.cap = 0;
    str.s = NULL;
    setString(&str, s);

    return str;
}

void freeString(String str) {
    free( str.s );
}

void setStringCap(String * str, size_t new_cap) {
    void * res = realloc(str->s, new_cap);
    if (!res) {
        fprintf(stderr, "Realloc Failed: %s %d\n", __FILE__, __LINE__);
        exit(EXIT_FAILURE);
    }
    str->s = res;
    str->cap = new_cap;

}

void setString(String * dest, const char * src) {
    if (!dest) return;

    if (dest->cap < strlen(src)) {
        setStringCap(dest, dest->cap + C_STRING_DEFAULT_CAP);
    }

    strcpy(dest->s, src);
}

void appendString(String * dest, const char * src) {
    if (!dest) return;
    
    const size_t src_len = strlen(src);
    if (strlen(dest->s) + src_len + 1 < dest->cap) {
        setStringCap(dest, dest->cap + src_len + 1);
    }

    strcat(dest->s, src);
}

String c_str_printf(const char * format, ...) {
    
    va_list args;
    va_start(args, format);
    vsprintf(sprintf_buffer, format, args);
    va_end(args);

    return createStringExt(sprintf_buffer);
}
