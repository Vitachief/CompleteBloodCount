#include "bloodcount.h"

#include <cmath>

using namespace BloodEnums;

Result getValue(){
    return Result::Incorrect_Input;
}

Result getValue(const double& min, const double& max,
                const double& val){
    if (val < min)
        return Result::Decreased;
    else
        if (val > max)
            return Result::Increased;
    return Result::Normal;
}

BloodEnums::Result BloodCount::getRBC(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getHGB(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}

BloodEnums::Result BloodCount::getHCT(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMCV(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMCH(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMCHC(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getCF(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getRTC(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getPLT(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getWBC(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getNe(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}



BloodEnums::Result BloodCount::getPN(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMie(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMieY(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getLYM(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMON(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getEO(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getBA(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getVir(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getPlaz(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getESR(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;
    case Gender::Child:{
        return getValue();
    }break;
    case Gender::Child13_15y:{
        return getValue();
    }break;
    case Gender::Child7_12y:{
        return getValue();
    }break;
    case Gender::Child1_6y:{
        return getValue();
    }break;
    case Gender::Child12m:{
        return getValue();
    }break;
    case Gender::Child6m:{
        return getValue();
    }break;
    case Gender::Child1m:{
        return getValue();
    }break;
    default:
        return Result::Incorrect_Input;
    }
}
