#ifndef BOOK_H
#define BOOK_H

#include "content.h"

class Book : public Content
{
private:
    QString author;

public:
    Book();
};

#endif // BOOK_H
