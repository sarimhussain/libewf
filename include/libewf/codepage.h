/*
 * Codepage definitions for libewf
 *
 * Copyright (C) 2006-2015, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEWF_CODEPAGE_H )
#define _LIBEWF_CODEPAGE_H

#include <libewf/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBEWF_CODEPAGES
{
	LIBEWF_CODEPAGE_ASCII				= 20127,

	LIBEWF_CODEPAGE_ISO_8859_1			= 28591,
	LIBEWF_CODEPAGE_ISO_8859_2			= 28592,
	LIBEWF_CODEPAGE_ISO_8859_3			= 28593,
	LIBEWF_CODEPAGE_ISO_8859_4			= 28594,
	LIBEWF_CODEPAGE_ISO_8859_5			= 28595,
	LIBEWF_CODEPAGE_ISO_8859_6			= 28596,
	LIBEWF_CODEPAGE_ISO_8859_7			= 28597,
	LIBEWF_CODEPAGE_ISO_8859_8			= 28598,
	LIBEWF_CODEPAGE_ISO_8859_9			= 28599,
	LIBEWF_CODEPAGE_ISO_8859_10			= 28600,
	LIBEWF_CODEPAGE_ISO_8859_11			= 28601,
	LIBEWF_CODEPAGE_ISO_8859_13			= 28603,
	LIBEWF_CODEPAGE_ISO_8859_14			= 28604,
	LIBEWF_CODEPAGE_ISO_8859_15			= 28605,
	LIBEWF_CODEPAGE_ISO_8859_16			= 28606,

	LIBEWF_CODEPAGE_KOI8_R				= 20866,
	LIBEWF_CODEPAGE_KOI8_U				= 21866,

	LIBEWF_CODEPAGE_WINDOWS_874			= 874,
	LIBEWF_CODEPAGE_WINDOWS_932			= 932,
	LIBEWF_CODEPAGE_WINDOWS_936			= 936,
	LIBEWF_CODEPAGE_WINDOWS_949			= 949,
	LIBEWF_CODEPAGE_WINDOWS_950			= 950,
	LIBEWF_CODEPAGE_WINDOWS_1250			= 1250,
	LIBEWF_CODEPAGE_WINDOWS_1251			= 1251,
	LIBEWF_CODEPAGE_WINDOWS_1252			= 1252,
	LIBEWF_CODEPAGE_WINDOWS_1253			= 1253,
	LIBEWF_CODEPAGE_WINDOWS_1254			= 1254,
	LIBEWF_CODEPAGE_WINDOWS_1255			= 1255,
	LIBEWF_CODEPAGE_WINDOWS_1256			= 1256,
	LIBEWF_CODEPAGE_WINDOWS_1257			= 1257,
	LIBEWF_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBEWF_CODEPAGE_US_ASCII			LIBEWF_CODEPAGE_ASCII

#define LIBEWF_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBEWF_CODEPAGE_ISO_8859_1
#define LIBEWF_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBEWF_CODEPAGE_ISO_8859_2
#define LIBEWF_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBEWF_CODEPAGE_ISO_8859_3
#define LIBEWF_CODEPAGE_ISO_NORTH_EUROPEAN		LIBEWF_CODEPAGE_ISO_8859_4
#define LIBEWF_CODEPAGE_ISO_CYRILLIC			LIBEWF_CODEPAGE_ISO_8859_5
#define LIBEWF_CODEPAGE_ISO_ARABIC			LIBEWF_CODEPAGE_ISO_8859_6
#define LIBEWF_CODEPAGE_ISO_GREEK			LIBEWF_CODEPAGE_ISO_8859_7
#define LIBEWF_CODEPAGE_ISO_HEBREW			LIBEWF_CODEPAGE_ISO_8859_8
#define LIBEWF_CODEPAGE_ISO_TURKISH			LIBEWF_CODEPAGE_ISO_8859_9
#define LIBEWF_CODEPAGE_ISO_NORDIC			LIBEWF_CODEPAGE_ISO_8859_10
#define LIBEWF_CODEPAGE_ISO_THAI			LIBEWF_CODEPAGE_ISO_8859_11
#define LIBEWF_CODEPAGE_ISO_BALTIC			LIBEWF_CODEPAGE_ISO_8859_13
#define LIBEWF_CODEPAGE_ISO_CELTIC			LIBEWF_CODEPAGE_ISO_8859_14

#define LIBEWF_CODEPAGE_ISO_LATIN_1			LIBEWF_CODEPAGE_ISO_8859_1
#define LIBEWF_CODEPAGE_ISO_LATIN_2			LIBEWF_CODEPAGE_ISO_8859_2
#define LIBEWF_CODEPAGE_ISO_LATIN_3			LIBEWF_CODEPAGE_ISO_8859_3
#define LIBEWF_CODEPAGE_ISO_LATIN_4			LIBEWF_CODEPAGE_ISO_8859_4
#define LIBEWF_CODEPAGE_ISO_LATIN_5			LIBEWF_CODEPAGE_ISO_8859_9
#define LIBEWF_CODEPAGE_ISO_LATIN_6			LIBEWF_CODEPAGE_ISO_8859_10
#define LIBEWF_CODEPAGE_ISO_LATIN_7			LIBEWF_CODEPAGE_ISO_8859_13
#define LIBEWF_CODEPAGE_ISO_LATIN_8			LIBEWF_CODEPAGE_ISO_8859_14
#define LIBEWF_CODEPAGE_ISO_LATIN_9			LIBEWF_CODEPAGE_ISO_8859_15
#define LIBEWF_CODEPAGE_ISO_LATIN_10			LIBEWF_CODEPAGE_ISO_8859_16

#define LIBEWF_CODEPAGE_KOI8_RUSSIAN			LIBEWF_CODEPAGE_KOI8_R
#define LIBEWF_CODEPAGE_KOI8_UKRAINIAN			LIBEWF_CODEPAGE_KOI8_U

#define LIBEWF_CODEPAGE_WINDOWS_THAI			LIBEWF_CODEPAGE_WINDOWS_874
#define LIBEWF_CODEPAGE_WINDOWS_JAPANESE		LIBEWF_CODEPAGE_WINDOWS_932
#define LIBEWF_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBEWF_CODEPAGE_WINDOWS_936
#define LIBEWF_CODEPAGE_WINDOWS_KOREAN			LIBEWF_CODEPAGE_WINDOWS_949
#define LIBEWF_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBEWF_CODEPAGE_WINDOWS_950
#define LIBEWF_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBEWF_CODEPAGE_WINDOWS_1250
#define LIBEWF_CODEPAGE_WINDOWS_CYRILLIC		LIBEWF_CODEPAGE_WINDOWS_1251
#define LIBEWF_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBEWF_CODEPAGE_WINDOWS_1252
#define LIBEWF_CODEPAGE_WINDOWS_GREEK			LIBEWF_CODEPAGE_WINDOWS_1253
#define LIBEWF_CODEPAGE_WINDOWS_TURKISH			LIBEWF_CODEPAGE_WINDOWS_1254
#define LIBEWF_CODEPAGE_WINDOWS_HEBREW			LIBEWF_CODEPAGE_WINDOWS_1255
#define LIBEWF_CODEPAGE_WINDOWS_ARABIC			LIBEWF_CODEPAGE_WINDOWS_1256
#define LIBEWF_CODEPAGE_WINDOWS_BALTIC			LIBEWF_CODEPAGE_WINDOWS_1257
#define LIBEWF_CODEPAGE_WINDOWS_VIETNAMESE		LIBEWF_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

