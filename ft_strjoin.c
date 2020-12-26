/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esoulard <esoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:45:47 by esoulard          #+#    #+#             */
/*   Updated: 2019/11/10 15:27:59 by esoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char *s1, char *s2, int stocklen, int ratlen)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(new = ft_malloc("char", (ratlen + stocklen + 1))))
		return (NULL);
	while (i < ratlen)
	{
		new[i] = s1[i];
		i++;
	}
	while (j < stocklen)
		new[i++] = s2[j++];
	new[i] = '\0';
	ft_free(s1);
	ft_free(s2);
	return (new);
}
