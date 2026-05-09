/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 14:34:35 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/07 13:30:36 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
    if(c>='A' && c<='Z')
        return(c + 32);
    return(c);
}     

#include <stdio.h>
int main(void)
{
    char C = 'A';
    char D = 'a';
    printf("%d",ft_tolower(C));
    printf("%d",ft_tolower(D));
    return(0);
}