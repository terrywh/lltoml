#ifndef PARSER_KEYVALUE_PARSER_CORE_H
#define PARSER_KEYVALUE_PARSER_CORE_H

typedef enum keyvalue_parser_error_e {
    KEYVALUE_PARSER_ERROR_SUCCESS,
    KEYVALUE_PARSER_ERROR_UNEXPECTED_TOKEN = 201,
} keyvalue_parser_error_t;

#endif // PARSER_KEYVALUE_PARSER_CORE_H