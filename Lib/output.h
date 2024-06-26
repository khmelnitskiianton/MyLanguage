#ifndef OUTPUT_H
#define OUTPUT_H

#define EXT_TREE ".tree"
#define EXT_PROC ".s"

EnumOfErrors PrintTree (BinaryTree_t* myTree, const char* in_file_path, const char* extension);

const size_t SIZE_OF_OUT_PATH    = 500;
const size_t SIZE_OF_OUT_COMMAND = SIZE_OF_OUT_PATH + 40;
const size_t SIZE_OF_NAME_FILE   = 100;

#endif 