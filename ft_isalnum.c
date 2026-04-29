/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 00:40:34 by nsaiki            #+#    #+#             */
/*   Updated: 2026/04/26 00:48:18 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
        return(1);
    return(0);
}
#include<stdio.h>
int main(void)
{
    printf("%d",ft_isalnum('a'));
    return (0);
}