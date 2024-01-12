#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

struct SymbolTable
{
    char data_type[256];
    char name[256];
    char value[256];
    char scope[256];
};

struct SymbolTableStruct
{
    char scope[256];
    char data_type[256];
    char name[256];
    int index;
    int max_index;
    SymbolTable variables[50];
    int array[100];
};

class SymbolManager
{
public:
    SymbolTable symbols[50];
    int no_symbols = 0;

    SymbolTableStruct cls[50];
    int nr_class = 0;

    SymbolTableStruct arrays[50];
    int no_arrays = 0;

    SymbolTableStruct functions[50];
    int no_functions = 0;

    //--------------------------------------------------------------

    int is_int(char value[256]);
    int is_float(char value[256]);
    int is_const(char data_type[256]);
    int is_value_null(char name[256]);
    int is_boolean(char value[256]);

    //--------------------------------------------------------------

    int update_value_class(char name1[256], char name2[256], char value[256]);
    int check_variable_class(char name1[256], char name2[256]);
    void push_class(char name[256]);
    void push_variables(char data_type[256], char name[256], char value[256]);

    //--------------------------------------------------------------

    int look_function(char name[256]);
    int check_signature(char data_type[256], char name[256], char no_param[256]);
    void push_function_param(char data_type[256], char name[256], char value[256], char scope[256]);
    void push_function(char data_type[256], char name[256], char no_param[256], char scope[256]);

    //--------------------------------------------------------------

    void push_symbol(char data_type[256], char name[256], char value[256], char scope[256]);
    int lookup(char name[256]);
    char *get_value(char name[256]);
    const char *get_scope(char name[256]);
    char *get_data_type(const char name[256]);
    const char *value_by_scope(char name[256], char scope[256]);
    int lookup_function_variable(char name[256]);
    const char *variable_value_by_scope(char name[256]);
    int check_data_type(char data_type[256], char value[256]);
    void reassign_value(char name[256], char value[256]);

    //--------------------------------------------------------------

    // array related functions
    void push_array(char data_type[256], char name[256], char int_value[256], char scope[256]);
    void push_array_element(char name[256], char index[256], char value[256]);
    int check_inside(char name[256], char index[256]);
    int lookup_array(char name[256]);
    int get_element(char name[256], char index[256]);

    //--------------------------------------------------------------

    void print_to_file();
};