//***************************************************************************//
//          Test displayAttribute in the class ShapePopulationBase           //
//***************************************************************************//

#include <iostream>
#include <string>
#include <QApplication>
#include <QFileInfo>

#include "testDisplayAttribute.h"

int main(int, char *argv[])
{
    TestShapePopulationBase testShapePopulationBase;

    bool test = testShapePopulationBase.testDisplayAttribute( (std::string)argv[1] );

    if(!test) return 0;
    else return -1;
}
