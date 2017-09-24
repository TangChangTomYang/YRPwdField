//
//  GHUserGuideViewController.h
//  GHUserGuideDemo
//
//  Created by yangrui on 2017/9/24.
//  Copyright © 2017年 yangrui. All rights reserved.
//

/**
 *  使用系统键盘的密码输入框
 */

#import <UIKit/UIKit.h>
#import "UIView+Extension.h"

@class GHPwdField;

@protocol GHPwdFieldDelegate <NSObject>

@optional
/**用户的正在输入就会调用*/
- (void)pwdField:(GHPwdField *)pwdField didChangeInputPwd:(NSString *)nputPwd;

/** 密码的位数输入完成 就会调用*/
- (void)pwdField:(GHPwdField *)pwdField didEndInputPwd:(NSString *)nputPwd;
@end

@interface GHPwdField : UIView

/** 密码长度 默认6 */
@property (nonatomic , assign ) NSUInteger passwordLength;
/**  grid line color 默认紫色 */
@property (nonatomic , strong) UIColor  *gridLineColor;
/**  grid line width 默认1.0f*/
@property (nonatomic , assign) CGFloat  gridLineWidth;
/**dot color 默认紫色*/
@property (nonatomic , strong) UIColor  *dotColor;
/** dot width 默认12.0f*/
@property (nonatomic , assign) CGFloat  dotWidth;
/**label text color 默认 黑色*/
@property (nonatomic , strong) UIColor  *textColor;
/**label text font 默认 15*/
@property (nonatomic , strong) UIFont *font;
/**明文 / 密文 , 默认密文(YES)*/
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
/**用户当前输入的密码个数 , 设置这个值,可以修改圆点显示*/
@property (nonatomic , assign) NSInteger inputCount;

/**用户输入的密码*/
@property (nonatomic , strong , readonly) NSString  *password;
/**delegate*/
@property (nonatomic , weak) id <GHPwdFieldDelegate>delegate;

/**
 *  快速创建对象,
 *  @param passwordLength 密码长度,默认6位
 *  @return XLPasswordInputView实例对象
 */
+ (instancetype)pwdWithLength:(NSInteger)passwordLength;
/** 清空密码,重置*/
- (void)clearPassword;

@end
