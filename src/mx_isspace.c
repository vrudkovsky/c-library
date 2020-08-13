#include "libmx.h"

int mx_isspace(unsigned char c) {
    if (c == '\a' || c == '\b' ||  
        c == '\t' || c == '\n' || 
        c == '\v' || c == '\f' || 
        c == '\r' || c == ' ')
        return 1;
    return 0;
}
