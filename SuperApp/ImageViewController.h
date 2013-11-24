//
//  ImageViewController.h
//  SuperApp
//
//  Created by Harrison Powers on 11/24/13.
//  Copyright (c) 2013 Harrison Powers. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MediaObject;

@interface ImageViewController : UIViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil mediaObject:(MediaObject *)mediaObject;

@end
