/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:35:28 by aaugusti          #+#    #+#             */
/*   Updated: 2020/04/08 19:50:50 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"
#include <math.h>

/*
**	Calculate the distance between two vectors.
**
**	@param {t_vec3f} a
**	@param {t_vec3f} b
**
**	@return {double}
*/

double	vec_dist(t_vec3f a, t_vec3f b)
{
	return (sqrt(pow(b.x - a.x, 2) +
				pow(b.y - a.y, 2) +
				pow(b.z - a.z, 2)));
}
