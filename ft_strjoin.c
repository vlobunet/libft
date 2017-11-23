/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 19:38:57 by vlobunet          #+#    #+#             */
/*   Updated: 2017/10/25 19:39:00 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*snew;

	if (s1 == NULL && s2 == NULL)
		return (ft_strnew(0));
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (s == NULL)
		return (NULL);
	snew = s;
	while (*s1 != '\0')
		*snew++ = *s1++;
	while (*s2 != '\0')
		*snew++ = *s2++;
	*snew = '\0';
	return (s);
}
