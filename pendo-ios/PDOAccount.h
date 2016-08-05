//
//  PDOAccount.h
//  Pendo
//
//  Created by Antonio Rodriguez on 2/11/16.
//  Copyright © 2016 Pendo. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PDOSerializable.h"

/**
 Represents an account.
 */
@interface PDOAccount : NSObject<PDOSerializable>

/// Account's id
@property (strong, nonatomic, nullable) NSString *accountId;

/// Account's options. Since options will be serialialized, they must
/// be on a JSON compatible format.
@property (strong, nonatomic, nullable) NSDictionary *options;

@end
