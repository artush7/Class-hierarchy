#include "org_types.h"

#include <iostream>
#include <string.h>

Organization::Organization(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address)
{
    strcpy(_name, name);
    strcpy(_legal_entity, legal_entity);
    this->_bank_account = bank_account;
    this->_establishment = establishment;
    strcpy(_address,address);
}

Fund::Fund(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char* president) : Organization(name, legal_entity, bank_account, establishment, address)
{
    strcpy(_president,president);
}

NGO::NGO(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char* director) : Organization(name, legal_entity, bank_account, establishment, address)
{
    strcpy(_director,director);
}

LLC::LLC(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char*,const char* director) : Organization(name, legal_entity, bank_account, establishment, address)
{
    strcpy(_director,director); 
}

CJSC::CJSC(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char*,const char* shareholder) : Organization(name, legal_entity, bank_account, establishment, address)
{
    strcpy(_shareholder,shareholder);
}


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
