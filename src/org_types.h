#include "organization.h"

class Fund : public Organization
{
protected:
    char _board_of_trustees[50];
    char _president[50];
    char _sponsor[50];
public:
    Fund(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char* president);

    void field() override;
    //void set_name() override;
};

class NGO : public Organization
{
protected:
    char _director[50];
    char _board_of_directors[50];
public:
    NGO(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char* director);

    void field() override;
};

class LLC : public Organization
{
protected:
    int _capital;
    char _accountant[50];
    char _director[50];
public:
    LLC(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char*,const char* direcotr);
    void field() override;
};

class CJSC : public Organization
{
protected:
    char _shareholder[50];
    int _shares;

public:
    CJSC(const char* name,const char* legal_entity,int bank_account,int establishment,const char* address, const char*,const char* shareholder);

    void field() override;

};


