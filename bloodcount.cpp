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
        return getValue(4.0, 5.15, value);
    }break;
    case Gender::Female:{
        return getValue(3.7, 4.7, value);
    }break;
  /*  case Gender::Child13_15y:{
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
    case Gender::Child:{
        return getValue(3.8, 4.9, value);
    }break;*/
    default:
        return getValue(3.8, 4.9, value);//Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getHGB(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue(135, 160, value);
    }break;
    case Gender::Female:{
        return getValue(120, 140, value);
    }break;
   /* case Gender::Child:{
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
    }break;*/
    default:
        return getValue(135, 160, value);//Result::Incorrect_Input;
    }
}

BloodEnums::Result BloodCount::getHCT(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue(40, 54, value);
    }break;
    case Gender::Female:{
        return getValue(37, 47, value);
    }break;        
    case Gender::Child1m:{
        return getValue(44, 64, value);
    }break;
    /*case Gender::Child:{
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
    }break;*/
    default:
        return getValue(31, 41, value);//Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMCV(const double& value,
                          BloodEnums::Gender /*gend*/){
    return getValue(80, 100, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getMCH(const double& value,
                          BloodEnums::Gender gend){
    return getValue(28, 32, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getMCHC(const double& value,
                          BloodEnums::Gender gend){
    return getValue(32, 36, value);
    /*switch (gend){
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
    case Gender::Child:{
        return getValue(3.8, 4.9, value);
    }break;
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
    }*/
}


BloodEnums::Result BloodCount::getCF(const double& value,
                          BloodEnums::Gender /*gend*/){
    return getValue(0.85, 1.05, value);
   /* switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getRTC(const double& value,
                          BloodEnums::Gender /*gend*/){
    return getValue(0.2, 1.2, value);
    /*switch (gend){
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
        return getValue(3, 10, value);
    }break;
    case Gender::Child6m:{
        return getValue(5, 13, value);
    }break;
    case Gender::Child1m:{
        return getValue(5, 13, value);
    }break;
    default:
        return Result::Incorrect_Input;
    }*/
}


BloodEnums::Result BloodCount::getPLT(const double& value,
                          BloodEnums::Gender gend){
    return getValue(150, 400, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getWBC(const double& value,
                          BloodEnums::Gender /*gend*/){
    return getValue(4, 9, value);
   /* switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getNe(const double& value,
                          BloodEnums::Gender gend){
    return getValue(40, 68, value);
    /*switch (gend){
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
    }*/
}



BloodEnums::Result BloodCount::getPN(const double& value,
                          BloodEnums::Gender gend){
    return getValue(1, 5, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getMie(const double& value,
                          BloodEnums::Gender gend){
    return getValue(0, 0, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getMieY(const double& value,
                          BloodEnums::Gender gend){
    return getValue(0, 0, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getLYM(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue(19, 37, value);
    }break;
    case Gender::Female:{
        return getValue(19, 37, value);
    }break;
    /*case Gender::Child:{
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
    default:*/
        return getValue(33, 35, value);//Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getMON(const double& value,
                          BloodEnums::Gender /*gend*/){
    return getValue(4, 10, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getEO(const double& value,
                          BloodEnums::Gender gend){
    return getValue(0.3, 7, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getBA(const double& value,
                          BloodEnums::Gender gend){
    return getValue(0, 1, value);
    /*switch (gend){
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
    }*/
}


BloodEnums::Result BloodCount::getVir(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
   /* case Gender::Male:{
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
    }break;*/
    case Gender::Child12m:{
        return getValue(0, 1, value);
    }break;
    case Gender::Child6m:{
        return getValue(0, 1, value);
    }break;
    case Gender::Child1m:{
        return getValue(0, 1 , value);
    }break;
    default:
        return getValue(0,0,value);//Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getPlaz(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    /*case Gender::Male:{
        return getValue();
    }break;
    case Gender::Female:{
        return getValue();
    }break;*/
    case Gender::Child13_15y:
    case Gender::Child7_12y:
    case Gender::Child1_6y:
    case Gender::Child12m:
    case Gender::Child6m:
    case Gender::Child1m:
    case Gender::Child:{
        return getValue(0, 1, value);
    }break;
    default:
        return getValue(0, 0, value);//Result::Incorrect_Input;
    }
}


BloodEnums::Result BloodCount::getESR(const double& value,
                          BloodEnums::Gender gend){
    switch (gend){
    case Gender::Male:{
        return getValue(2, 10, value);
    }break;
    case Gender::Female:{
        return getValue(3, 15, value);
    }break;
    case Gender::Child:
    case Gender::Child13_15y:
    case Gender::Child7_12y:
    case Gender::Child12m:/*{
        return getValue();
    }break;*/
    case Gender::Child6m:/*{
        return getValue();
    }break;*/
    case Gender::Child1_6y:{
        return getValue(12, 17, value);
    }break;

    case Gender::Child1m:{
        return getValue(0, 2, value);
    }break;
    default:
        return Result::Incorrect_Input;
    }
}
