/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:50:27 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 11:57:05 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

/*
**	Subtract vector b from a.
**
**	@param {t_vec3f} a
**	@param {t_vec3f} b
**
**	@return {t_vec3f}
*/

t_vec3f	vec_sub(t_vec3f a, t_vec3f b)
{
	return (vec_new(a.x - b.x,
					a.y - b.y,
					a.z - b.z));
}
