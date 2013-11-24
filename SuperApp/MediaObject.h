//
//  MediaObject.h
//  SuperApp
//
//  Created by Harrison Powers on 11/24/13.
//  Copyright (c) 2013 Harrison Powers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MediaObject : NSObject
@property (strong, nonatomic) NSString *username;
@property (strong, nonatomic) NSString *caption;
@property (strong, nonatomic) NSURL *imageURL;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
