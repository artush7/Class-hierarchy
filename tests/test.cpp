#include <gtest/gtest.h>
#include "/home/artush/main/c++_project/homework/Class Hierarchy/src/registrar.h"


TEST(class,fund)
{
    Registrar registrar;

    Organization* fund = new Fund("FundName", "LegalEntity", 111, 2000, "Address", "President");

    registrar.RegisterOrganization(fund);

    EXPECT_EQ();
}