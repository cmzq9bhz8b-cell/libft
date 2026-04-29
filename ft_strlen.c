/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 01:32:48 by nsaiki            #+#    #+#             */
/*   Updated: 2026/04/28 00:42:12 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t count;
    count = 0;
    while(s[count])
    {
        count++;
    }
    return (count);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("%lu",ft_strlen("hello"));
//     return(0);
// }