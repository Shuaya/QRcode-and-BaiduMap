//
//  JSS_WtiteViewController.h
//  Demo-Test
//
//  Created by Daniel on 16/6/22.
//  Copyright © 2016年 Daniel. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ReturnImageBlock)(UIImage *image);

@interface JSS_WtiteViewController : UIViewController

@property (copy, nonatomic) ReturnImageBlock imageBlock;

@end
