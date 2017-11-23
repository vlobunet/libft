/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlobunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:34:13 by vlobunet          #+#    #+#             */
/*   Updated: 2017/10/31 13:34:16 by vlobunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*str;

	str = (t_list*)malloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	if (content == NULL)
	{
		str->content = NULL;
		str->content_size = 0;
	}
	else
	{
		str->content = malloc(content_size);
		if (content == NULL)
		{
			free(str);
			return (NULL);
		}
		ft_memcpy(str->content, content, content_size);
		str->content_size = content_size;
	}
	str->next = NULL;
	return (str);
}
