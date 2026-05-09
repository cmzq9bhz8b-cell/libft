/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 23:04:47 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/10 01:09:50 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	k = 0;
    i = 0;
	while (src[k])
		k++;
	if (size == 0)
		return (k);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (k);
}

#include <stdio.h>

int	main(void)
{
	char dst[5];
    size_t a;
	a = ft_strlcpy(dst, "hello", 5);
    printf("%s",dst);
    printf("%zu",a);
	return (0);
}