/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/ari/resource_asterisk.c
 *
 * Asterisk resources
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/ari_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_ASTERISK_H
#define _ASTERISK_RESOURCE_ASTERISK_H

#include "asterisk/ari.h"

/*! Argument struct for ast_ari_asterisk_get_info() */
struct ast_ari_asterisk_get_info_args {
	/*! Array of Filter information returned */
	const char **only;
	/*! Length of only array. */
	size_t only_count;
	/*! Parsing context for only. */
	char *only_parse;
};
/*!
 * \brief Body parsing function for /asterisk/info.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_asterisk_get_info_parse_body(
	struct ast_json *body,
	struct ast_ari_asterisk_get_info_args *args);

/*!
 * \brief Gets Asterisk system information.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_asterisk_get_info(struct ast_variable *headers, struct ast_ari_asterisk_get_info_args *args, struct ast_ari_response *response);
/*! Argument struct for ast_ari_asterisk_get_global_var() */
struct ast_ari_asterisk_get_global_var_args {
	/*! The variable to get */
	const char *variable;
};
/*!
 * \brief Body parsing function for /asterisk/variable.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_asterisk_get_global_var_parse_body(
	struct ast_json *body,
	struct ast_ari_asterisk_get_global_var_args *args);

/*!
 * \brief Get the value of a global variable.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_asterisk_get_global_var(struct ast_variable *headers, struct ast_ari_asterisk_get_global_var_args *args, struct ast_ari_response *response);
/*! Argument struct for ast_ari_asterisk_set_global_var() */
struct ast_ari_asterisk_set_global_var_args {
	/*! The variable to set */
	const char *variable;
	/*! The value to set the variable to */
	const char *value;
};
/*!
 * \brief Body parsing function for /asterisk/variable.
 * \param body The JSON body from which to parse parameters.
 * \param[out] args The args structure to parse into.
 * \retval zero on success
 * \retval non-zero on failure
 */
int ast_ari_asterisk_set_global_var_parse_body(
	struct ast_json *body,
	struct ast_ari_asterisk_set_global_var_args *args);

/*!
 * \brief Set the value of a global variable.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_asterisk_set_global_var(struct ast_variable *headers, struct ast_ari_asterisk_set_global_var_args *args, struct ast_ari_response *response);

#endif /* _ASTERISK_RESOURCE_ASTERISK_H */
