//
//  BrushViewController.h
//  FlashCard
//
//  Created by Maxmalla - MAC2 on 6/16/14.
//  Copyright (c) 2014 Maxmalla - MAC2. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DrawingViewController;
@interface BrushViewController : UIViewController
@property (nonatomic,assign) DrawingViewController *delegate;
@end
