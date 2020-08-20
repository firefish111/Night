#pragma once

#include <string>

enum class TokenType
{
	BIT_TYPE,
	SYB_TYPE,
	INT_TYPE,
	DEC_TYPE,
	STR_TYPE,
	NULL_TYPE,

	VARIABLE,

	ASSIGNMENT,

	PLUS_ASSIGN,
	MINUS_ASSIGN,
	DIVIDE_ASSIGN,
	TIMES_ASSIGN,
	MOD_ASSIGN,

	BIT_VALUE,
	SYB_VALUE,
	INT_VALUE,
	DEC_VALUE,
	STR_VALUE,

	PLUS_EQUALS,
	MINUS_EQUALS,
	DIVIDE_EQUALS,
	TIMES_EQUALS,
	MOD_EQUALS,

	PLUS,
	MINUS,
	DIVIDE,
	TIMES,
	MOD,

	GREATER,
	SMALLER,
	GREATER_EQUAL,
	SMALLER_EQUAL,

	NOT,
	OR,
	AND,

	EQUALS,
	NOT_EQUALS,

	OPEN_BRACKET,
	CLOSE_BRACKET,
	
	OPEN_SQUARE,
	CLOSE_SQUARE,

	OPEN_CURLY,
	CLOSE_CURLY,

	IF,
	ELSE,

	RETURN,

	COMMA,
	SEMICOLON
};

struct Token
{
	TokenType type;
	std::string token;
};