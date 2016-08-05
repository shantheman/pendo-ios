//
//  PDOSerializable.h
//  pendointernal-ios
//
//  Created by Antonio Rodriguez on 7/29/16.
//  Copyright © 2016 Pendo. All rights reserved.
//

#ifndef PDOSerializable_h
#define PDOSerializable_h

typedef NS_ENUM(NSInteger, PDOSerializationFormat) {
    
    PDOSerializationFormatJSON = 1 << 0,
    
};

@protocol PDOSerializable <NSObject>

@optional
- (instancetype _Nullable)initWithSerialization:(id _Nonnull)json format:(PDOSerializationFormat)format;

@required
- (id _Nullable)serializeWithFormat:(PDOSerializationFormat)format;

@end

#endif /* PDOSerializable_h */
