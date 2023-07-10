#include <stdarg.h>
#include <stdio.h>
#define clr_printf_RESET   "\033[0m"
#define clr_printf_BLACK   "\033[0;30m"
#define clr_printf_RED     "\033[0;31m"
#define clr_printf_GREEN   "\033[0;32m"
#define clr_printf_YELLOW  "\033[0;33m"
#define clr_printf_BLUE    "\033[0;34m"
#define clr_printf_MAGENTA "\033[0;35m"
#define clr_printf_CYAN    "\033[0;36m"
#define clr_printf_WHITE   "\033[0;37m"
void clrprintf(const char * str,const char * color, ...);