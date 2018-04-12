//
// Created by kirill on 11.04.18.
//
#include "test1.cpp"

void test(){
    try {
        test1();
    } catch (except::Exception &e){
        except::Exception ex(e);
        throw ex;
    }
}
