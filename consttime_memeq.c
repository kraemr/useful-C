/* $NetBSD: consttime_memequal.c,v 1.6 2015/03/18 20:11:35 riastradh Exp $ */

/*
 * Written by Matthias Drochner <drochner@NetBSD.org>.
 * Public domain.
 */

 #include <stdio.h>
int consttime_memequal(const void *b1, const void *b2, unsigned long len)
{
	const unsigned char *c1 = b1, *c2 = b2;
	unsigned int res = 0;
	while (len--)res |= *c1++ ^ *c2++;
	return (1 & ((res - 1) >> 8));
}

