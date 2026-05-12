/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 00:54:41 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/10 00:23:19 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
        i++;
    if(nptr[i] == '-' || nptr[i] == '+')
    {
        if(nptr[i] == '-')
            sign = -1;
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <='9')
    {
        result = result*10 + (nptr[i] - '0');
        i++;
    }
    return (result*sign);
}