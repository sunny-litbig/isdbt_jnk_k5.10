/****************************************************************************

Copyright (C) 2013 Telechips Inc.


Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions andlimitations under the License.

****************************************************************************/

#ifndef _CDK_PORT_H_
#define _CDK_PORT_H_

#include "cdk_pre_define.h"

#ifndef NULL
#	define NULL	0
#endif

/************************************************************************

	typedef

************************************************************************/
#define CDK_TYPES
#if defined(ARM_WINCE) // ARM WinCE
	typedef unsigned __int64  uint64_t;
	typedef __int64 int64_t;
#else
#ifndef _STDINT_H
	typedef unsigned long long uint64_t;
	typedef signed long long int64_t;
#endif
#endif
typedef int cdk_handle_t;
typedef int cdk_result_t;
typedef int cdk_bool_t;

/************************************************************************

	defines

************************************************************************/
#ifndef TRUE
	#define TRUE 1
#endif
#ifndef FALSE
	#define FALSE 0
#endif

#endif//_CDK_PORT_H_
