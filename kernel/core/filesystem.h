#ifndef MS_FS_H
#define MS_FS_H

#include "file.h"

class FileSystem {
public:
    FileSystem();
    ~FileSystem();

    void init();

    File* path(char* p);
    File* path_parent(char* p, char* name);

    u32 link(File* file, File* new_file);
    u32 add_file(char* dir, File* file);

    File* get_root();
private:
    File* root;
    File* dev;
    File* var;
};

#endif