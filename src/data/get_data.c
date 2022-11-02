/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:43:40 by stales            #+#    #+#             */
/*   Updated: 2022/11/02 18:50:59 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fastmem.h"

//////////////////////////////////
//
//	    INCLUDES
//
/////////////////////////////////

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*********************************************************************
* get_data - get random data over /dev/urandom
*
* @param   number of bytes	size_t
*
* @return  pointer to data in heap memory area
*
* Generate random data
*
*********************************************************************
*/

void	*get_data(size_t size)
{
	void	*ptr;
	int	fd;

	ptr = NULL;
	fd = open("/dev/urandom", O_RDONLY);
	if (fd < 0)
		return (NULL);
	ptr = malloc(size);
	if (!ptr)
	{
		close(fd);
		return (NULL);
	}
	if (read(fd, ptr, size) != (ssize_t)size)
		return (NULL);
	close(fd);
	return (ptr);
}
