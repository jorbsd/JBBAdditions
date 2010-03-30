//
//  NSObject+JBBAdditions.m
//  JBBAdditions
//
//  Created by Jordan Breeding on 2008/10/19.
//  Copyright 2010 Jordan Breeding. All rights reserved.
//
//  BSD License, Use at your own risk
//

#import "NSObject+JBBAdditions.h"
#import "NSString+JBBAdditions.h"

void jbb_puts(id anObject);

@implementation NSObject (JBBAdditions)

#pragma mark Instance Methods

- (void)jbb_puts {
    if ([[self description] hasSuffix:@"\n"]) {
        [[self description] jbb_print];
    } else {
        [[[self description] stringByAppendingString:@"\n"] jbb_print];
    }
}
@end

void jbb_puts(id anObject) {
    [anObject jbb_puts];
}

