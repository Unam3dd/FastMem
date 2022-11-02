/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstmemcpy_unaligned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:20:09 by stales            #+#    #+#             */
/*   Updated: 2022/11/02 18:20:50 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fastmem.h"

void	*fastmemcpy_unaligned(void *dst, const void *src, size_t size)
{
	(void)dst, (void)src, (void)size;
	return (NULL);
}
