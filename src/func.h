
int class_test();

class Organization
{   
 public:
    char name[50];
    char charter[50];
    char legal_entity[50];
    int bank_account;
    char addres[50];
    int TIN;
    int establishment;
    char address[50];

    virtual void field();
};

class Fund : public Organization
{
public:
    char board_of_trustees[50];
    char president[50];
    char sponsor[50];

    void field() override;
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
