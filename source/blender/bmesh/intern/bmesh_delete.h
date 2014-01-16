/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Contributor(s): Geoffrey Bantle.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#ifndef __BMESH_DELETE_H__
#define __BMESH_DELETE_H__

/** \file blender/bmesh/intern/bmesh_delete.h
 *  \ingroup bmesh
 */

void BMO_remove_tagged_faces(BMesh *bm, const short oflag);
void BMO_remove_tagged_edges(BMesh *bm, const short oflag);
void BMO_remove_tagged_verts(BMesh *bm, const short oflag);

void BMO_remove_tagged_context(BMesh *bm, const short oflag, const int type);

#endif /* __BMESH_DELETE_H__ */
