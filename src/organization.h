
class Organization
{   
protected:
    char _name[50];
    char _charter[50];
    char _legal_entity[50];
    int _bank_account;
    int _TIN;
    int _establishment;
    char _address[50];
public:
    Organization(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address);

    virtual void field() = 0;
    //virtual void set_name() = 0;
        
};