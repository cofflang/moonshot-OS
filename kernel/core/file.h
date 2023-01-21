#ifndef MS_FILE_H
#define MS_FILE_H

#include "util/types.h"

class File {
public:
    File();
    ~File();

    virtual u32 open(u32 flag);
    virtual u32 close();
    virtual u32 read (u32 pos, u8* buf, u32 size);
    virtual u32 write(u32 pos, u8* buf, u32 size);
    virtual u32 ioctl(u32 id , u8* buf);
    virtual u32 remove();

    virtual void scan();

    u32 add_child(File* file);

    File* create_child(char* name, u8 type);
    File* find(char* name);

    u32 mmap(u32 size, u32 flags, u32 offset, u32 prot);

    char* get_name();

    File* get_parent();
    File* get_child();
    File* get_link();

    u8  get_type();
    u32 get_size();

protected:
    char* name;

    u32 size;
    u8  type;

    File* link;

    File* parent;
    File* child;

    File* device;
};

#endif