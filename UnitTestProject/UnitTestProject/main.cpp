//
//  main.cpp
//  UnitTestProject
//
//  Created by Matic Drobez on 13/11/2018.
//  Copyright © 2018 Matic. All rights reserved.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "MyClass.cpp"

TEST_CASE("This is a test!")
{
    MyClass myClass;
    REQUIRE(myClass.MeaningOfLife() == 42);
}

