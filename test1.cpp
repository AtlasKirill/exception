//
// Created by kirill on 11.04.18.
//


#include "exception.h"

void test1(){
    except::Exception e("Evrthg is bad",__FILE__,__LINE__,__func__);

    throw e;
}