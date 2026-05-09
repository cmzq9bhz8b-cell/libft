/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 20:16:28 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/09 21:32:52 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
  int ft_strncmp(const char *s1, const char *s2, size_t n)
  {
    size_t i;
    i = 0;
    while(i < n)
    {
        if(s1[i] != s2[i])
          return(((unsigned char) s1[i])-((unsigned char) s2[i]));
        if(s1[i] == '\0')
          return(0);
        i++;
    }
    return(0);
  }

  #include <stdio.h>
int main(void)
{
    const char *s1 = "Hello";
    const char *s2 = "Help";
    size_t n = 3;

    int result = ft_strncmp(s1, s2, n);
    printf("ft_strncmp(%s, %s, %zu) = %d\n", s1, s2, n, result);

    return 0;
}