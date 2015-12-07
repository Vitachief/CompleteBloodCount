#ifndef BLOODCOUNT_H
#define BLOODCOUNT_H



namespace BloodEnums{

enum class Gender{
    Male = 0,
    Female,
    Child,
    Child13_15y,
    Child7_12y,
    Child1_6y,
    Child12m,
    Child6m,
    Child1m
};

enum class Result{
    Normal,
    Increased,
    Decreased,
    Incorrect_Input
};
}

/**
 * @brief The BloodCount class
 */
class BloodCount{
public:
    BloodCount()
        : gender(BloodEnums::Gender::Male)
    {}
    BloodCount(BloodEnums::Gender gend)
        : gender(gend)
    {}
    ~BloodCount(){}

    BloodEnums::Result getRBC(const double& value){
        return getRBC(value, gender);
    }
    static BloodEnums::Result getRBC(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getHGB(const double& value){
        return getHGB(value, gender);
    }
    static BloodEnums::Result getHGB(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getHCT(const double& value){
        return getHCT(value, gender);
    }
    static BloodEnums::Result getHCT(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getMCV(const double& value){
        return getMCV(value, gender);
    }
    static BloodEnums::Result getMCV(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getMCH(const double& value){
        return getMCH(value, gender);
    }
    static BloodEnums::Result getMCH(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getMCHC(const double& value){
        return getMCHC(value, gender);
    }
    static BloodEnums::Result getMCHC(const double& value,
                              BloodEnums::Gender gend);

    /**
     * @brief getCF Цветовой показатель
     * @param value
     * @return
     */
    BloodEnums::Result getCF(const double& value){
        return getCF(value, gender);
    }
    static BloodEnums::Result getCF(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getRTC(const double& value){
        return getRTC(value, gender);
    }
    static BloodEnums::Result getRTC(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getPLT(const double& value){
        return getPLT(value, gender);
    }
    static BloodEnums::Result getPLT(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getWBC(const double& value){
        return getWBC(value, gender);
    }
    static BloodEnums::Result getWBC(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getNe(const double& value){
        return getNe(value, gender);
    }
    static BloodEnums::Result getNe(const double& value,
                              BloodEnums::Gender gend);

    /**
     * @brief getPN Палочкоядерные нейтрофилы
     * @param value
     * @return
     */
    BloodEnums::Result getPN(const double& value){
        return getPN(value, gender);
    }

    static BloodEnums::Result getPN(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getMie(const double& value){
        return getMie(value, gender);
    }
    static BloodEnums::Result getMie(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getMieY(const double& value){
        return getMieY(value, gender);
    }
    static BloodEnums::Result getMieY(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getLYM(const double& value){
        return getLYM(value, gender);
    }
    static BloodEnums::Result getLYM(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getMON(const double& value){
        return getMON(value, gender);
    }
    static BloodEnums::Result getMON(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getEO(const double& value){
        return getEO(value, gender);
    }
    static BloodEnums::Result getEO(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getBA(const double& value){
        return getBA(value, gender);
    }
    static BloodEnums::Result getBA(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getVir(const double& value){
        return getVir(value, gender);
    }
    static BloodEnums::Result getVir(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getPlaz(const double& value){
        return getPlaz(value, gender);
    }
    static BloodEnums::Result getPlaz(const double& value,
                              BloodEnums::Gender gend);

    BloodEnums::Result getESR(const double& value){
        return getESR(value, gender);
    }
    static BloodEnums::Result getESR(const double& value,
                              BloodEnums::Gender gend);


    void setGender(BloodEnums::Gender g){
        gender = g;
    }

    BloodEnums::Gender getGender() const{
        return gender;
    }

private:
    BloodEnums::Gender gender;
};

#endif // BLOODCOUNT_H
