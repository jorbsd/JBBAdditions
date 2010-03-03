//
//  NSInvocation+JBBAdditions.h
//  JBBAdditions
//
//  Created by Jordan Breeding on 2008/10/19.
//  Copyright 2010 Jordan Breeding. All rights reserved.
//
//  BSD License, Use at your own risk
//

#import <Foundation/Foundation.h>
#import "JBBTypes.h"

@interface NSInvocation (JBBAdditions)
// Inspired by Mike Ash: http://mikeash.com/pyblog/friday-qa-2010-02-05-error-returns-with-continuation-passing-style.html
// Code also pulled from http://github.com/erica/NSObject-Utility-Categories/blob/master/NSObject-Utilities.m

// id and char (assumed to be BOOL) will be always be checked, the errorHandler will be run if id is nil or char/BOOL is NO
// id will be passed through untouched, all other types will be passed to continuation as NSValue with objCType set
//
// if the NSError* passed to errorHandler is nil assume that an error condition really did still occur as
// id was nil or char/BOOL was NO

#pragma mark Instance Methods

- (void)jbb_invokeWithContinuation:(Continuation)aContinuation errorHandler:(ErrorHandler)anErrorHandler;
@end

