/*
   BAREOS® - Backup Archiving REcovery Open Sourced

   Copyright (C) 2018-2018 Bareos GmbH & Co. KG

   This program is Free Software; you can redistribute it and/or
   modify it under the terms of version three of the GNU Affero General Public
   License as published by the Free Software Foundation and included
   in the file LICENSE.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
   Affero General Public License for more details.

   You should have received a copy of the GNU Affero General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301, USA.
*/

#ifndef BAREOS_LIB_PARSE_CONF_CALLBACKS_H_
#define BAREOS_LIB_PARSE_CONF_CALLBACKS_H_ 1

struct ResourceItem;
class CommonResourceHeader;
class ConfigurationParser;

typedef bool (*SaveResourceCb_t)(int type, ResourceItem *item, int pass);
typedef void (*DumpResourceCb_t)(int type,
                                 CommonResourceHeader *res,
                                 void sendmsg(void *sock, const char *fmt, ...),
                                 void *sock,
                                 bool hide_sensitive_data,
                                 bool verbose);

typedef void (*FreeResourceCb_t)(CommonResourceHeader *res, int type);
typedef void (*ParseConfigReadyCb_t)(ConfigurationParser &);

#endif /* BAREOS_LIB_PARSE_CONF_CALLBACKS_H_ */
