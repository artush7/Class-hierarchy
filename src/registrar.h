#include <vector>
#include <iostream>

#include "org_types.h"

class Registrar
{
protected:
    std::vector<Organization*> _organization;
public:
    void RegisterOrganization(Organization* organization)
    {
        _organization.push_back(organization);
    }
    ~Registrar() 
    {

    }


};