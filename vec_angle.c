/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_angle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:30:49 by aaugusti          #+#    #+#             */
/*   Updated: 2020/04/08 19:50:42 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"
#include <math.h>

/*
**	Calculate the angle between two vector in radians.
**
**	@param {t_vec3f} a
**	@param {t_vec3f} b
**
**	@return {double}
*/

double	vec_angle(t_vec3f a, t_vec3f b)
{
	double	res;

	res = vec_dotp(a, b);
	res /= vec_len(a) * vec_len(b);
	return (acos(res));
}
