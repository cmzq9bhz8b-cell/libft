/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd,c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 01:02:36 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/12 01:13:09 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if(nb < 0)
    {
        ft_putchar_fd('-',fd);
        nb = -nb;
    }
    if(nb >=10)
        ft_putnbr_fd(nb/10,fd);
    ft_putchar_fd((nb % 10) + '0',fd);
}