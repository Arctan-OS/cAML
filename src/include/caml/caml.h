/**
 * @file caml.c
 *
 * @author awewsomegamer <awewsomegamer@gmail.com>
 *
 * @LICENSE
 * cAML - ACPI utility
 * Copyright (C) 2024 awewsomegamer
 *
 * This file is part of cAML.
 *
 * cAML is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @DESCRIPTION
 * General cAML definitions.
*/
#ifndef ARC_CAML_CAML_H
#define ARC_CAML_CAML_H

#include <stdlib.h>
#include <stdio.h>

#define CAML_ALLOC(__size) malloc(__size);
#define CAML_FREE(__ptr) free(__ptr);
#define CAML_REALLOC(__ptr, __size) realloc(__ptr, __size);
#define CAML_PRINTF(__form, ...) printf(__form, __VA_ARGS__);

int init_caml(void *rsdp);

#endif
