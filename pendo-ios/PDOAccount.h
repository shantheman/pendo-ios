//
//  PDOAccount.h
//  Pendo
//
//  Created by Antonio Rodriguez on 2/11/16.
//  Copyright © 2016 Pendo. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Represents an account.
 */
@interface PDOAccount : NSObject

/// Account's id
@property (strong, nonatomic, nullable) NSString *accountId;

/// Account's options
@property (strong, nonatomic, nullable) NSDictionary *options;

@end
