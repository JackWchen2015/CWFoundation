//
//  CWFoundationMacro.h
//  Pods
//
//  Created by JackChen on 2019/11/13.
//

#ifndef CWFoundationMacro_h
#define CWFoundationMacro_h



//设备宽度 跟横竖屏的无关
#define IS_LANDSCAPE UIInterfaceOrientationIsLandscape([[UIApplication sharedApplication]statusBarOriention])
#define DEVICE_WIDTH (IS_LANDSCAPE?[UIScreen mainScreen].bounds.size.height):([UIScreen mainScreen].bounds.size.width))
#define DEVICE_HEIGHT (IS_LANDSCAPE?[UIScreen mainScreen].bounds.size.width):([UIScreen mainScreen].bounds.size.height))

//屏幕宽度，会根据横竖屏的变化而变化
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define WidthScale    SCREEN_WIDTH / 375.f
#define HeightScale   SCREEN_HEIGHT / 667.f
#define SX(v) (WidthScale * v)
#define SY(v) (HeightScale * v)

//全面屏适配
#define IS_FUllSCREEN ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size)) : NO)
//所有的全面屏的上下安全距离大小是一样的状态栏高度为44，底部高度为34。
#define StatusBarHeight  (IS_FUllSCREEN?44.f:20.f)
#define StatusBarAndNavigationBarHeight (IS_FUllSCREEN?88.f:64.f)
#define TabBarHEIGHT  (IS_FUllSCREEN?83.f:49.f)
#define kMarginBottomHeight (IS_FUllSCREEN?34.f : 0.f)

//类型转换
#define SAFE_CAST(OBJECT, TYPE) ({ id obj=OBJECT;[obj isKindOfClass:[TYPE class]] ? (TYPE *) obj: nil; })

#endif /* CWFoundationMacro_h */

