//
//  YanSYPlugin.h
//  Cordova测试demo
//
//  Created by YanSY on 2017/5/16.
//  Copyright © 2017年 YanSY. All rights reserved.
//

#import <Cordova/CDVPlugin.h>

@interface YanSYPlugin : CDVPlugin<UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIImagePickerController *_imagePickerController; // 定义相机控件类
}

// 本类插件方法 - 当在web调用时
- (void)myMethod:(CDVInvokedUrlCommand*)command;


@end
