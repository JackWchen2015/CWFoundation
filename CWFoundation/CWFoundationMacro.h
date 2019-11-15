//
//  CWFoundationMacro.h
//  Pods
//
//  Created by JackChen on 2019/11/13.
//

#ifndef CWFoundationMacro_h
#define CWFoundationMacro_h

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define WidthScale    SCREEN_WIDTH / 375.0f
#define HeightScale   SCREEN_HEIGHT / 667.0f
#define SX(v) (WidthScale * v)
#define SY(v) (HeightScale * v)

#endif /* CWFoundationMacro_h */

