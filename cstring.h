/*
    MIT License

    Copyright (c) 2024 Marvin Katapult

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the Software), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#ifndef __C_STRING__
#define __C_STRING__

#define C_STRING_DEFAULT_CAP      32
#define C_STRING_SPRINTF_BUF_SIZE 2048

#include <stddef.h>

typedef struct String {
    char * s;
    size_t cap;
} String;

String createString(void);
String createStringExt(const char * s);
void freeString(String str);
void setStringCap(String * str, size_t new_cap);

void setString(String * dest, const char * src);
void appendString(String * dest, const char * src);
String c_str_printf(const char * format, ...); // Max length for result is C_STRING_SPRINTF_BUF_SIZE

#endif // __C_STRING__
