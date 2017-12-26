//
// Created by frank on 17-12-26.
//

#ifndef TJSON_NONCOPYABLE_H
#define TJSON_NONCOPYABLE_H

namespace tjson
{

class noncopyable
{
public:
    noncopyable() = default;
    ~noncopyable() = default;
    noncopyable(const noncopyable&) = delete;
    void operator=(const noncopyable&) = delete;
};

}

#endif //TJSON_NONCOPYABLE_H
