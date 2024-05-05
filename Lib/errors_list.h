//CODE-GENERATED DEFINED ERRORS <NAME>-<MESSAGE>
DEF_ERROR(OK,                           "Everything is ok!")
DEF_ERROR(BAD_POINTER_TREE,             "Bad pointer of tree was passed in function")
DEF_ERROR(BAD_POINTER_NODE,             "Bad pointer of node was passed in function")
DEF_ERROR(BAD_POINTER_STR,              "Bad pointer of string was passed in function")
DEF_ERROR(BAD_CALLOC,                   "Error in calloc when create new node")
DEF_ERROR(BAD_REALLOC,                  "Error in expansion!")
DEF_ERROR(BAD_OPEN_FILE,                "Error in openning file")
DEF_ERROR(BAD_CLOSE_FILE,               "Error in closing file")
DEF_ERROR(ROOT_NULL,                    "Root of tree became null")
DEF_ERROR(BAD_VALUE_OF_DATA,            "The value of data is bad")
DEF_ERROR(LOOP_IN_TREE,                 "Find loop in tree")
DEF_ERROR(TREE_SEARCH_NOT_DONE,         "Error in recursive tree searching")
DEF_ERROR(BAD_FILESTREAM,               "Bad filestream passed in function")
DEF_ERROR(BAD_POINTER_FILE,             "Bad pointer of file passed in function")
DEF_ERROR(BAD_IN_READ_FILE,             "Size of result fread not equal to ")
DEF_ERROR(WHAT_FILE_OF_DATA,            "While compiling you need to write in what file save data")
DEF_ERROR(BAD_POINTER_DATA,             "Bad pointer of data was passed in function")
DEF_ERROR(BAD_FREAD,                    "Size of return fread not equal to size_text")
DEF_ERROR(NO_FILE_TO_OPEN,              "There is no such file to open!")
DEF_ERROR(BAD_POINTER_PASSED_IN_FUNC,   "Bad pointer passed in function!")
DEF_ERROR(OVERFLOW_VARIABLES,           "Amount of variables is < 50! Please write code shortly")
DEF_ERROR(EMPTY_FILE,                   "Your code file is empty!")
DEF_ERROR(UNKNOWN_OBJ,                  "Something strange in your code! It's not a variable and not oper/num/bracket!")
DEF_ERROR(BAD_TOKEN,                    "Strange token!")
DEF_ERROR(FORGOT_ARGS_IN_START,         "Missing args in frontend.exe! Try >frontend.exe {folder of temorary files} {path to source code}")
DEF_ERROR(OVERFLOW_BUFF,                "Buffer of buffer is overflow")

DEF_ERROR(NO_OPEN_BRACKET,              "You forgot open bracket!")
DEF_ERROR(NO_CLOSE_BRACKET,             "You forgot close bracket!")
DEF_ERROR(NO_DIVIDER,                   "You forgot divider after expression!")

DEF_ERROR(BAD_VARS,                     "In file with tree, bad table of vars!")
DEF_ERROR(BAD_VARS_INDEX,               "In file with tree, bad indexies in table of vars!")

DEF_ERROR(BAD_TRANSLATION,              "Error in BE in translation!")
DEF_ERROR(BAD_END_FUNC,                 "Error in ending function!")
DEF_ERROR(BAD_USING_BREAK_CONT,         "Error in using break or continue!")
DEF_ERROR(BAD_RETURN,                   "Error unknown variable you want to return!")
DEF_ERROR(BAD_RETURN_BE,                "Error, unknown object you want to return!")