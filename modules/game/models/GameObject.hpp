////////////////////////////////////////////////////////////////////////////////////
//
//     _____    ____ _       ____ _        __ _      __ _  __ _  ______ _   ___ _
//    / /| |]  |  __ \\     / ___ \\      / \ \\    |   \\/   |]|  _____|] / ___|]
//   / //| |]  | |] \ \\   | |]  \_|]    / //\ \\   | |\ / /| |]| |]___ _ ( ((_ _
//  / //_| |]_ | |]  ) ))  | |]  __ _   / _____ \\  | |]\_/ | |]|  _____|] \___ \\
// |_____   _|]| |]_/ //   | |]__/  |] / //    \ \\ | |]    | |]| |]___ _   ___) ))
//       |_|]  |_____//     \_____/|]]/_//      \_\\|_|]    |_|]|_______|] |____//
// 
//
////////////////////////////////////////////////////////////////////////////////////
//
//
//  File    : GameObject.hpp
//  Author  : Anthony Islas
//  Purpose : Generic Game Object, pure virtual class that cannot be used on its own
//  Group   : Models
//
//  TODO    : None
//
//  License : None
//
////////////////////////////////////////////////////////////////////////////////////

#ifndef __MODELS_GAMEOBJECT_H__
#define __MODELS_GAMEOBJECT_H__

namespace models
{

class GameObj
{

public:

  GameObj();
   
  virtual ~GameObj();

  virtual Render();

private:

  int xPos_;
  int yPos_;

};


} // namespace models

#endif // __MODELS_GAMEOBJECT_H__