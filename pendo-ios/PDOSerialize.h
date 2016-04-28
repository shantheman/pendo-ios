//
//  PDOSerialize.h
//  Pendo iOS SDK
//
//  Created by Antonio Rodriguez on 12/18/15.
//  Copyright © 2015 Pendo.io, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Objects that serialize to a JSON-compatible NSDictionary representation must conform
 to PDOSerialize.
 */
@protocol PDOSerialize <NSObject>

@required
/**
 Returns a JSON-compatible representation for the object.
 */
- (id)serialize;

@end
