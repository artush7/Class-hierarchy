class Organization
{   
protected:
    char _name[50];
    char charter[50];
    char legal_entity[50];
    int bank_account;
    char addres[50];
    int TIN;
    int establishment;
    char address[50];
    
public:
    virtual ~Organization() {}
    virtual void field() = 0;
    virtual void set_name() = 0;
        
};


class Fund : public Organization
{
protected:
    char board_of_trustees[50];
    char president[50];
    char sponsor[50];
public:
    Fund(const char* name)
    {

    }

    void field() override;
    void set_name() override;
};

class NGO : public Organization
{
public:
    char director[50];
    char board_of_directors[50];

    void field() override;
};

class LLC : public Organization
{
public:
    int capital;
    char accountant[50];
    char direcotr[50];

    void field() override;
};

class CJSC : public Organization
{
public:
    char shareholder[50];
    int shares;

    void field() override;

};


