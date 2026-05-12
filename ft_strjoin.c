/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaiki <nsaiki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:04:16 by nsaiki            #+#    #+#             */
/*   Updated: 2026/05/12 18:23:34 by nsaiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t k;
    char *ans;
    i = 0;
    k = 0;
    ans = (char *)malloc(sizeof(char) * (ft_strlen(s1)+ft_strlen(s2)+1));
    if(!ans)
        return(NULL);
    while(s1[i])
    {
        ans[i] = s1[i];
        i++;
    }
    while(s2[k])
    {
        ans[i] = s2[k];
        i++;
        k++;
    }
    ans[i] ='\0';
    return (ans);
}