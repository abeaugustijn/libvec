/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 13:17:53 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 12:00:56 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"
#include <math.h>
#include <stdbool.h>

/*
**	Compares two vectors. Returns true if they are equal.
**
**	@param {t_vec3f} a
**	@param {t_vec3f} b
**
**	@return {bool}
*/

bool	vec_compare(t_vec3f a, t_vec3f b)
{
	return (vec_float_compare(a.x, b.x) &&
			vec_float_compare(a.y, b.y) &&
			vec_float_compare(a.z, b.z));
}
