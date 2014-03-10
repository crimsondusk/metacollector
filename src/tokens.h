/*
	Copyright 2012-2014 Santeri Piippo
	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions
	are met:

	1. Redistributions of source code must retain the above copyright
	   notice, this list of conditions and the following disclaimer.
	2. Redistributions in binary form must reproduce the above copyright
	   notice, this list of conditions and the following disclaimer in the
	   documentation and/or other materials provided with the distribution.
	3. The name of the author may not be used to endorse or promote products
	   derived from this software without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
	IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
	OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
	IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
	NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
	DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
	THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
	THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once
#include <climits>
#include "macros.h"

// =======================================================
enum ETokenType
{
	// Non-word tokens
	TK_LeftShiftAssign,
	TK_RightShiftAssign,
	TK_Equals,
	TK_NotEquals,
	TK_AddAssign,
	TK_SubAssign,
	TK_MultiplyAssign,
	TK_DivideAssign,
	TK_ModulusAssign,
	TK_LeftShift,
	TK_RightShift,
	TK_AtLeast,
	TK_AtMost,
	TK_DoubleAmperstand,
	TK_DoubleBar,
	TK_DoublePlus,
	TK_DoubleMinus,
	TK_SingleQuote,
	TK_DollarSign,
	TK_ParenStart,
	TK_ParenEnd,
	TK_BracketStart,
	TK_BracketEnd,
	TK_BraceStart,
	TK_BraceEnd,
	TK_Assign,
	TK_Plus,
	TK_Minus,
	TK_Multiply,
	TK_Divide,
	TK_Modulus,
	TK_Comma,
	TK_Lesser,
	TK_Greater,
	TK_Dot,
	TK_Colon,
	TK_Semicolon,
	TK_Hash,
	TK_ExclamationMark,
	TK_Amperstand,
	TK_Bar,
	TK_Caret,
	TK_QuestionMark,
	TK_Arrow,
	TK_Backslash,
	TK_Tilde,

	// --------------
	// Generic tokens
	TK_Symbol,
	TK_Number,
	TK_String,
	TK_Any,
};

static const int g_lastNamedToken		= (int) TK_Symbol - 1;
