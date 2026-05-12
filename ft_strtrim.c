/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:24:31 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/12 19:04:55 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *result;
    start = 0;
    while(s1[start] && ft_strchr(set,s1[start]))
        start++;
    end = ft_strlen(s1);
    while(end > start &&ft_strchr(set,s1[end - 1]))
        end--;
    result = ft_substr(s1,start,end - start);
    return (result);
}