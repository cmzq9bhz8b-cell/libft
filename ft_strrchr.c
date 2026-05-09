/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 01:15:38 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/08 01:29:50 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s);
char *ft_strrchr(const char *s, int c)
{
     size_t t;
     t = ft_strlen(s)
      if(s[t] == (char)c)
        return ((char *)&s[t])
     while(s[t] && t>0)
     {
        if(s[t] == (char)c)
            return((char *)&s[t]);
        t--;
     }
     
}