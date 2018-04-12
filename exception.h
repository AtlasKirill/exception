//
// Created by kirill on 11.04.18.
//
#include <string>
#include <typeinfo>
#include <iostream>

#ifndef EXCEPTION_EXCEPTION_H
#define EXCEPTION_EXCEPTION_H

using std::string;
namespace except {

    class Exception {
        const string ex_description, file, function;
        int line = 0;
        Exception *previous{nullptr};
    public:

        explicit Exception(const string & /*des*/, const string & /*f*/, int /*l*/, const string & /*func*/);

        Exception( Exception *prev);

        ~Exception() { previous = nullptr; }

        const string &what() const;

    };

    Exception::Exception(const string &des, const string &f, int l, const string &func) : ex_description(des),
                                                                                          file(f), line(l),
                                                                                          function(func) {}

    Exception::Exception(Exception *prev) : previous(prev) {}

    const string &Exception::what() const {
        if (previous == nullptr)
            return ex_description;
        return previous->what();
    }

}
#endif //EXCEPTION_EXCEPTION_H
