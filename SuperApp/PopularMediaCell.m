//
//  PopularMediaCell.m
//  iClone
//
//  Created by Harrison Powers on 11/24/13.
//  Copyright (c) 2013 Harrison Powers. All rights reserved.
//

#import "PopularMediaCell.h"
#import "MediaObject.h"

@implementation PopularMediaCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setMediaObject:(MediaObject *)mediaObject
{
    _mediaObject = mediaObject;
    
    // Each time we set a cell's mediaObject property
    // Configure its textLabel to display the username
    
    self.textLabel.text = mediaObject.username;
    self.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
}

@end