#ifndef MS_FILE_H
#define MS_FILE_H

class File {
public:
    File(); // TODO: add custom int types
    ~File();

    int open();
    int close();
    int read();
    int write();
    int remove(); // TODO: typedef unsigned int 32 bit

    File* get_parent();
    File* get_child();

protected:
    File* parent;
    File* child;
};

#endif