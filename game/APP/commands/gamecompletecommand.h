#ifndef GAMECOMPLETECOMMAND_H
#define GAMECOMPLETECOMMAND_H

#include "../../common/etlbase.h"

class GameAPP;
class gamecompletecommand: public ICommandBase
{
private:
    GameAPP *ptrApp;
public:
    gamecompletecommand(GameAPP *ptr_App);
    ~gamecompletecommand();
    virtual void SetParameter(const _new_any_space_::any& param);
    virtual void Exec();
};

#endif // GAMECOMPLETECOMMAND_H