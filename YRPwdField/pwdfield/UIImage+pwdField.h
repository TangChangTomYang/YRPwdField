//
//  GHUserGuideViewController.h
//  GHUserGuideDemo
//
//  Created by yangrui on 2017/9/24.
//  Copyright © 2017年 yangrui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (pwdField)

/**
 *  返回一张密码输入框网格图片
 *
 *  @param gridCount 网格数
 *  @param gridLineColor 网格线颜色
 *  @param gridLineWidth 网格线宽度
 *
 *  @return 网格图片
 */
+ (instancetype)passwordInputGridImageWithGridCount:(NSInteger)gridCount gridLineColor:(UIColor *)gridLineColor gridLineWidth:(CGFloat)gridLineWidth;
/**
 *  返回一张指定size的指定颜色的圆形拉伸保护的纯色图片
 */
+ (instancetype)circleAndStretchableImageWithColor:(UIColor *)color size:(CGSize)size;

@end

