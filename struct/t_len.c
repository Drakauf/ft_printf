/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   t_len.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/27 14:07:53 by shthevak     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/19 11:46:24 by shthevak    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

t_len	*ft_t_lencrea(void)
{
	t_len *t;

	t = malloc(sizeof(t_len) * 1);
	if (t)
	{
		t->i = 0;
		t->j = 0;
		t->k = 0;
		t->f = 0;
	}
	return (t);
}
