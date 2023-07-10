#include "clrprintf.h"
void clrprintf(const char * str,const char * color, ...){
    va_list ptr;
    va_start(ptr, color);
    int p = printf("%s",color);
    p = vprintf(str,ptr);
    p = printf("%s",clr_printf_RESET);
}