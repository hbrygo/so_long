/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubrygo <hubrygo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:21:06 by hubrygo           #+#    #+#             */
/*   Updated: 2023/06/07 16:52:45 by hubrygo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_is_new_line(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_set_stack(char **s)
{
	free(*s);
	*s = NULL;
	return (NULL);
}

char	*ft_join(char *stack, char **ret, char *buff)
{
	*ret = stack;
	stack = ft_strjoin(*ret, buff);
	return (stack);
}
