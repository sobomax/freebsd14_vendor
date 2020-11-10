/*-
 *
 * This file is in the public domain.
 */
/* $FreeBSD: releng/12.2/libexec/flua/modules/lposix.h 354833 2019-11-18 23:21:13Z kevans $ */

#pragma once

#include <lua.h>

int luaopen_posix_unistd(lua_State *L);
