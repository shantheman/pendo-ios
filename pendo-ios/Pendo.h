//
//  Pendo.h
//  Pendo iOS SDK
//
//  Created by Antonio Rodriguez on 12/10/15.
//  Copyright © 2015 Pendo.io, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PDOAccount.h"
#import "PDOVisitor.h"
#import "PDOEnvironment.h"

@class PDOEvent;
@class UIView;

/**
 This handler's arguments are the available configurable options.
 
 @param visitor: Current's visitor options.
 @param account: Current's account options.
 
 */
typedef void (^PDOIdentifyHandler)(PDOVisitor * _Nonnull visitor, PDOAccount * _Nonnull account);

/**
 
 Entry point for the Pendo SDK. Call `Pendo.startWithApiKey` to start collecting events. For more 
 information and best practices, go to http://www.pendo.io
 
 Read the README for best practices using Pendo.
 
 */
@interface Pendo : NSObject

#pragma mark - Properties
/**
 SDK API key. Get it from the Settings on your Pendo account.
 */
@property (strong, nonatomic, readonly, nonnull) NSString *apiKey;

/**
 Returns the current environment information.
 */
@property (strong, nonatomic, readonly, nonnull) PDOEnvironment *environment;

// @property (assign, nonatomic, getter=areGuidesEnabled) BOOL guidesEnabled;

#pragma mark - Initialize
/**
 Initialize the Pendo SDK using the given `apiKey`.
 
 @param apiKey: Pendo Api Key
 @returns: Current Pendo instance
 
 */
+ (Pendo * _Nonnull)startWithApiKey:(NSString * _Nonnull)apiKey;

#pragma mark - Shared Instance
/**
 Returns the initialized Pendo instance.
 */
+ (instancetype _Nonnull)sharedInstance;

#pragma mark - Identify
/**
 Once the sdk is initialized, call identifyWithVisitorId:accountId:visitorOptions:accountOptions: to property identify the current user. If this
 is not called a random user will be assigned.
 
 @param identifyHandler: Handler to identify current visitor and account.
 
 */
- (void)identify:(PDOIdentifyHandler _Nonnull)identifyHandler;

// #pragma mark - Launcher
// - (void)displayGuideLauncher:(UIView * _Nonnull)view;

#pragma mark - Log
/**
 Enables Pendo's internal log
 */
- (Pendo * _Nonnull)enableLog;

@end
