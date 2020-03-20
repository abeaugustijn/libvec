/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:41:59 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 11:43:59 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

/*
**	Add two vectors.
**
**	@param {t_vec3f} a
**	@param {t_vec3f} b
**
**	@return {t_vec3f}
*/

t_vec3f	vec_add(t_vec3f a, t_vec3f b)
{
	t_vec3f	res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;
	res.z = a.z + b.z;
	return (res);
}
