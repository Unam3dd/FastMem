#ifndef FASTMEM_H
# define FASTMEM_H

//////////////////////////////////
//
//	     INCLUDES
//
/////////////////////////////////

#include <stdint.h>
#include <stddef.h>

//////////////////////////////////
//
//	    MEMCPY
//
/////////////////////////////////

void	*fstmemcpy(void *dst, const void *src, size_t size);
void	*fstmemcpy_aligned(void *dst, const void *src, size_t size);
void	*fstmemcpy_unaligned(void *dst, const void *src, size_t size);
void	*fstmemcpy_sse(void *dst, const void *src, size_t size);
void	*fstmemcpy_avx(void *dst, const void *src, size_t size);
void	*fstmemcpy_avx2(void *dst, const void *src, size_t size);

//////////////////////////////////
//
//	GENERATE DATA
//
/////////////////////////////////

uint8_t	*get_data(size_t size);

#endif
