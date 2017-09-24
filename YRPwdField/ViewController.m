//
//  ViewController.m
//  YRPwdField
//
//  Created by yangrui on 2017/9/24.
//  Copyright © 2017年 yangrui. All rights reserved.
//

#import "ViewController.h"
#import "GHPwdField.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    GHPwdField *pwdField = [GHPwdField pwdWithLength:6];
    
    pwdField.frame = CGRectMake(10, 100, 180, 30);
    
    [self.view addSubview:pwdField];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
