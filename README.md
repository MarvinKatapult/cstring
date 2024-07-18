# The Idea
CString is a String implementation for C. (Yes it's a skillissue but I find strings in C painful)

# Getting Started
Just use the cstring.h and cstring.c in your project.
To Compile the example execute the build.sh.
The Documentation is the header.

# Features
<p><code>
String createString(void);
String createStringExt(const char * s);
void freeString(String str);
void setStringCap(String * str, size_t new_cap);

void setString(String * dest, const char * src);
void appendString(String * dest, const char * src);
String c_str_printf(const char * format, ...); // Max length for result is C_STRING_SPRINTF_BUF_SIZE
</code></p>
