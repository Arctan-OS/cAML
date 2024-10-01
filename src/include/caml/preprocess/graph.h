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
 * Header file containg functions and structures relevant to maintaing the ACPI
 * namespace node graph.
*/
#ifndef ARC_CAML_PREPROCESS_GRAPH_H
#define ARC_CAML_PREPROCESS_GRAPH_H

struct cAML_Node {
	struct cAML_Node *next;
	struct cAML_Node *children;
};

int caml_add_node();
int caml_delete_node();

#endif
