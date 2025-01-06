
/******************************************************************************
 * Project Name: Modern String
 * File Name: Modern_String_base.h
 * Author: Saksham Joshi
 * Email: social.sakshamjoshi@gmail.com
 *
 * License:
 * This file is licensed under the GNU GENERAL PUBLIC LICENSE. You are free to use,
 * modify, and distribute this code for any purpose, with or without attribution.
 * 
 * DISCLAIMER: This code is provided "as is," without any warranty of any kind,
 * express or implied. The author is not responsible for any damages arising
 * from the use of this software.
 *
 * Copyright (c) [2025] Saksham Joshi. All rights reserved.
 *****************************************************************************/


#pragma once

#ifndef _STRING_H_
#define _STRING_H_


#include "Input_string.h"
#include<ctype.h>

#define MODERN_STRING_MAX_STRING_LEN SIZE_MAX
#define MODERN_STRING_NULL_TERMINATOR '\0'

typedef char ModernStringBool;
#define MODERN_STRING_TRUE (ModernStringBool) '1'
#define MODERN_STRING_FALSE (ModernStringBool) '\0'

typedef unsigned long long ULongLong;

/*
 Don't even dare to create its instance, instead call makeEmptyString, makeReservedString or makeString function
*/
typedef struct
{
    // contains character array
    char* _str;
    // contains the len till null terminator
    ULongLong _len;
    // contains the len of total allocated memory
    ULongLong _allocated;

} ModernString;

typedef ModernString* MstrPtr;


typedef struct 
{
    struct Alphabets
    {
        struct Vowels{
            unsigned long _capital;
            unsigned long _small;
        } _vowels ;

        struct Consonants{
            unsigned long _capital;
            unsigned long _small;
        } _consonants;

    } _alphabets;

    unsigned long _digits;
    unsigned long _spaces;
    unsigned long _newlines;
    unsigned long _misc;

    struct Brackets
    {
        struct CurlyBrackets
        {
            unsigned long _open;
            unsigned long _close;
        } _curly;
        
        struct RoundBrackets
        {
            unsigned long _open;
            unsigned long _close;
        } _round;

        struct SquareBrackets
        {
            unsigned long _open;
            unsigned long _close;
        } _square;

    } _brackets;

} ModernStringStats;


#define MODERN_STRING_ERROR_INDEX_OUT_OF_BOUND 101
#define MODERN_STRING_ERROR_MEMORY_NOT_AVAILABLE ENOMEM

#endif