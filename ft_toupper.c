/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:05:31 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/03 14:27:59 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if(c>='a' && c<='z')
        return(c-32);
    return(c);
}

#include <stdio.h>
int main(void)
{
    char c = 'a';
    char d = 'A';
    printf("%c",ft_toupper(c));
    printf("%c",ft_toupper(d));
    return(0);
}