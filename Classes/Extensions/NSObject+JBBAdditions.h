//
//  NSObject+JBBAdditions.h
//  JBBAdditions
//
//  Created by Jordan Breeding on 2008/10/19.
//  Copyright 2010 Jordan Breeding. All rights reserved.
//
//  BSD License, Use at your own risk
//

#import <Foundation/Foundation.h>

void jbb_puts(id anObject);

@interface NSObject (JBBAdditions)

#pragma mark Instance Methods

- (void)jbb_puts;
@end

