/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dotp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:27:47 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 11:50:36 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

/*
**	Take the dotproduct of two vectors.
**
**	@param {t_vec3f} a
**	@param {t_vec3f} b
**
**	@return {double}
*/

double	vec_dotp(t_vec3f a, t_vec3f b)
{
	return (a.x * b.x +
			a.y * b.y +
			a.z * b.z);
}
