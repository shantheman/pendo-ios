//
//  PDOVisitor.h
//  Pendo
//
//  Created by Antonio Rodriguez on 2/11/16.
//  Copyright © 2016 Pendo. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Represents a visitor
 */
@interface PDOVisitor : NSObject

/// Visitor's id
@property (strong, nonatomic, nonnull) NSString *visitorId;

/// Visitor's email
@property (strong, nonatomic, nullable) NSString *email;

/// Visitor's options
@property (strong, nonatomic, nullable) NSDictionary *options;

@end
