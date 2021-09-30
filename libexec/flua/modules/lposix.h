/*-
 *
 * This file is in the public domain.
 */
/* $FreeBSD: d2d9ec0cd67770b230852c86fab0cc6688e3acb9 $ */

#pragma once

#include <lua.h>

int luaopen_posix_sys_stat(lua_State *L);
int luaopen_posix_unistd(lua_State *L);
