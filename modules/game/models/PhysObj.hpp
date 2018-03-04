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
//  File    : PhysObj.hpp
//  Author  : Anthony Islas
//  Purpose : Class to represent all physical objects ( has a sprites )
//  Group   : Models
//
//  TODO    : None
//
//  License : None
//
////////////////////////////////////////////////////////////////////////////////////

#ifndef __MODELS_PHYSOBJ_H__
#define __MODELS_PHYSOBJ_H__

#include "graphics/Sprite.hpp"

namespace models
{

class PhysObj : public GameObj
{

public:

  PhysObj( );

  virtual ~PhysObj( );

  virtual void Render( );

  void addSprite( graphics::Sprite& sprite );
  void addAnim  ( graphics::Anim  & anim   );

  void setIdleSprite( std::string tag );
  void setIdleAnim  ( std::string tag );

private:
  //
  // Default sprite
  //
  Sprite idleSprite_;

  //
  // Default animation
  //
  Anim  idleAnim_;

  std::vector< Sprite& > vSprites_;
  std::vector< Anim& >   vAnimations_;

};

} // namespace models

#endif // __MODELS_PHYSOBJ_H__