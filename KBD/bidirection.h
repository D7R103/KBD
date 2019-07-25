#ifndef BIDIRECTION_H
#define BIDIRECTION_H

#include "stdafx.h"

class Bidirection
{
public:
    Bidirection();

    friend std::ostream & operator^(std::ostream & out, const string &);
};

#endif // BIDIRECTION_H
