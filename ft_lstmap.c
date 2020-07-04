/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:14:50 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/17 15:05:00 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next;
	t_list	*f_output;
	t_list	*ret;

	if (lst && f)
	{
		next = lst->next;
		f_output = f(lst);
		ret = ft_lstnew(f_output->content, f_output->content_size);
		ret->next = ft_lstmap(next, f);
		return (ret);
	}
	return (NULL);
}
