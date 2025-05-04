#include "/home/artush/#main(linux)/c++ project/homework/Class Hierarchy/src/func.h"
#include <iostream>


void Organization::setname(char* n,int len)
{
    for(int i = 0;i < len;++i)
        {
            name[i] = n[i];

        }
    std::cout <<name << std::endl;
}

void Organization::field() {};

void Fund::field()
{
    std::cout <<"Funds can be categorized into several types, such as financial, charitable, governmental, and others, depending on their purpose and source of funding" << std::endl;
}

void NGO::field()
{
    std::cout <<"NGOs can be categorized into various types, such as humanitarian, environmental, educational, health-focused, and advocacy organizations, depending on their mission and area of work." <<std::endl;
}

void LLC::field()
{
    std::cout <<"LLCs can be categorized into different types based on their structure and business activity, such as single-member, multi-member, professional, and series LLCs" <<std::endl;
}

void CJSC::field()
{
    std::cout <<"CJSCs can be categorized based on their industry and ownership structure, such as manufacturing, service-based, holding, or investment companies, typically with a limited number of shareholders" <<std::endl;
}
