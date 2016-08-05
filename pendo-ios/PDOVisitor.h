//
//  PDOVisitor.h
//  Pendo
//
//  Created by Antonio Rodriguez on 2/11/16.
//  Copyright © 2016 Pendo. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PDOSerializable.h"

/**
 Represents a visitor
 */
@interface PDOVisitor : NSObject <PDOSerializable>

/// Visitor's id
@property (strong, nonatomic, nonnull) NSString *visitorId;

/// Visitor's email
@property (strong, nonatomic, nullable) NSString *email;

/// Visitor's options. Since options will be serialialized, they must
/// be on a JSON compatible format.
@property (strong, nonatomic, nullable) NSDictionary *options;

@end
