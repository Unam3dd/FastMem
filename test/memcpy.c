#include "fastmem.h"
#include "../iacaMarks.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	show_memory(uint8_t *buf, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		printf("%02x", buf[i++]);
	printf("\n");
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	int n = atoi(av[1]);
	uint8_t *data = (uint8_t *)get_data(n);
	uint8_t *dst = (uint8_t *)malloc(sizeof(uint8_t) * n);
	if (!dst)
		return (1);
	show_memory(data, atoi(av[1]));
	IACA_START
	memcpy(dst, data, n);
	IACA_END
	free(data);
	free(dst);
	data = NULL;
	dst = NULL;
	return (0);
}
